#ifndef INLINEQUERYRESULTCACHEDVOICE_H
#define INLINEQUERYRESULTCACHEDVOICE_H

#include "InlineQueryResult"

namespace Telegram
{
    class InlineQueryResultCachedVoice : public InlineQueryResult
    {
    public:
        InlineQueryResultCachedVoice();
        InlineQueryResultCachedVoice(QJsonObject jsonObject);
        InlineQueryResultCachedVoice(QString id, QString voiceFileId, QString title);
        
        //Getters/Setters
        QString getVoiceFileId() const;
        void setVoiceFileId(const QString &value);
        
        QString getTitle() const;
        void setTitle(const QString &value);
        
        QString getCaption() const;
        void setCaption(const QString &value);
        
        QString getParseMode() const;
        void setParseMode(const QString &value);
        
        //Flag getters
        bool hasVoiceFileId() const;
        
        bool hasTitle() const;
        
        bool hasCaption() const;
        
        bool hasParseMode() const;
    };
}
#endif // INLINEQUERYRESULTCACHEDVOICE_H

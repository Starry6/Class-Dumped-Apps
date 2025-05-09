@interface AWDIDSOutgoingMessageDurationTrace : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasSendToDaemonStart;
@property (nonatomic) I sendToDaemonStart;
@property (nonatomic) BOOL hasSendToDaemonDuration;
@property (nonatomic) I sendToDaemonDuration;
@property (nonatomic) BOOL hasStoreInDatabaseStart;
@property (nonatomic) I storeInDatabaseStart;
@property (nonatomic) BOOL hasStoreInDatabaseDuration;
@property (nonatomic) I storeInDatabaseDuration;
@property (nonatomic) BOOL hasCompressPayloadStart;
@property (nonatomic) I compressPayloadStart;
@property (nonatomic) BOOL hasCompressPayloadDuration;
@property (nonatomic) I compressPayloadDuration;
@property (nonatomic) BOOL hasUncompressedMessageSize;
@property (nonatomic) Q uncompressedMessageSize;
@property (nonatomic) BOOL hasCompressedMessageSize;
@property (nonatomic) Q compressedMessageSize;
@property (nonatomic) BOOL hasIDQueryStart;
@property (nonatomic) I iDQueryStart;
@property (nonatomic) BOOL hasIDQueryDuration;
@property (nonatomic) I iDQueryDuration;
@property (nonatomic) BOOL hasMessageOnQueueStart;
@property (nonatomic) I messageOnQueueStart;
@property (nonatomic) BOOL hasMessageOnQueueDuration;
@property (nonatomic) I messageOnQueueDuration;
@property (nonatomic) BOOL hasMessagesOnQueue;
@property (nonatomic) Q messagesOnQueue;
@property (nonatomic) BOOL hasEncryptionCount;
@property (nonatomic) I encryptionCount;
@property (nonatomic) BOOL hasAvgEncryptionDuration;
@property (nonatomic) I avgEncryptionDuration;
@property (nonatomic) BOOL hasAggregatedMessageSendCount;
@property (nonatomic) I aggregatedMessageSendCount;
@property (nonatomic) BOOL hasAvgAggregatedMessageSendDuration;
@property (nonatomic) I avgAggregatedMessageSendDuration;
@property (nonatomic) BOOL hasService;
@property (nonatomic) NSString service;
@property (nonatomic) BOOL hasCommand;
@property (nonatomic) I command;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) I priority;
- (void)setService:;
- (void)setPriority:;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)setHasPriority:;
- (id)service;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (unsigned int)command;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (BOOL)hasPriority;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setCommand:;
- (id)copyWithZone:;
- (unsigned int)priority;
- (BOOL)hasService;
- (void)setHasCommand:;
- (BOOL)hasCommand;
- (void)setSendToDaemonStart:;
- (void)setHasSendToDaemonStart:;
- (BOOL)hasSendToDaemonStart;
- (void)setSendToDaemonDuration:;
- (void)setHasSendToDaemonDuration:;
- (BOOL)hasSendToDaemonDuration;
- (void)setStoreInDatabaseStart:;
- (void)setHasStoreInDatabaseStart:;
- (BOOL)hasStoreInDatabaseStart;
- (void)setStoreInDatabaseDuration:;
- (void)setHasStoreInDatabaseDuration:;
- (BOOL)hasStoreInDatabaseDuration;
- (void)setCompressPayloadStart:;
- (void)setHasCompressPayloadStart:;
- (BOOL)hasCompressPayloadStart;
- (void)setCompressPayloadDuration:;
- (void)setHasCompressPayloadDuration:;
- (BOOL)hasCompressPayloadDuration;
- (void)setUncompressedMessageSize:;
- (void)setHasUncompressedMessageSize:;
- (BOOL)hasUncompressedMessageSize;
- (void)setCompressedMessageSize:;
- (void)setHasCompressedMessageSize:;
- (BOOL)hasCompressedMessageSize;
- (void)setIDQueryStart:;
- (void)setHasIDQueryStart:;
- (BOOL)hasIDQueryStart;
- (void)setIDQueryDuration:;
- (void)setHasIDQueryDuration:;
- (BOOL)hasIDQueryDuration;
- (void)setMessageOnQueueStart:;
- (void)setHasMessageOnQueueStart:;
- (BOOL)hasMessageOnQueueStart;
- (void)setMessageOnQueueDuration:;
- (void)setHasMessageOnQueueDuration:;
- (BOOL)hasMessageOnQueueDuration;
- (void)setMessagesOnQueue:;
- (void)setHasMessagesOnQueue:;
- (BOOL)hasMessagesOnQueue;
- (void)setEncryptionCount:;
- (void)setHasEncryptionCount:;
- (BOOL)hasEncryptionCount;
- (void)setAvgEncryptionDuration:;
- (void)setHasAvgEncryptionDuration:;
- (BOOL)hasAvgEncryptionDuration;
- (void)setAggregatedMessageSendCount:;
- (void)setHasAggregatedMessageSendCount:;
- (BOOL)hasAggregatedMessageSendCount;
- (void)setAvgAggregatedMessageSendDuration:;
- (void)setHasAvgAggregatedMessageSendDuration:;
- (BOOL)hasAvgAggregatedMessageSendDuration;
- (unsigned int)sendToDaemonStart;
- (unsigned int)sendToDaemonDuration;
- (unsigned int)storeInDatabaseStart;
- (unsigned int)storeInDatabaseDuration;
- (unsigned int)compressPayloadStart;
- (unsigned int)compressPayloadDuration;
- (unsigned long long)uncompressedMessageSize;
- (unsigned long long)compressedMessageSize;
- (unsigned int)iDQueryStart;
- (unsigned int)iDQueryDuration;
- (unsigned int)messageOnQueueStart;
- (unsigned int)messageOnQueueDuration;
- (unsigned long long)messagesOnQueue;
- (unsigned int)encryptionCount;
- (unsigned int)avgEncryptionDuration;
- (unsigned int)aggregatedMessageSendCount;
- (unsigned int)avgAggregatedMessageSendDuration;
@end

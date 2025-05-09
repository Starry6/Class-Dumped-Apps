@interface AWDMailAutoFetchReport : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasProtocol;
@property (nonatomic) NSInteger protocol;
@property (nonatomic) BOOL hasEmailProvider;
@property (nonatomic) NSInteger emailProvider;
@property (nonatomic) BOOL hasMailboxType;
@property (nonatomic) NSInteger mailboxType;
@property (nonatomic) BOOL hasMailError;
@property (nonatomic) AWDMailError mailError;
@property (nonatomic) BOOL hasTrigger;
@property (nonatomic) NSInteger trigger;
@property (nonatomic) BOOL hasNewMessagesState;
@property (nonatomic) NSInteger newMessagesState;
@property (nonatomic) BOOL hasForeground;
@property (nonatomic) BOOL foreground;
@property (nonatomic) BOOL hasDidTimeout;
@property (nonatomic) BOOL didTimeout;
@property (nonatomic) BOOL hasOptions;
@property (nonatomic) Q options;
@property (nonatomic) BOOL hasFetchSize;
@property (nonatomic) Q fetchSize;
@property (nonatomic) BOOL hasNumMessagesFetched;
@property (nonatomic) Q numMessagesFetched;
@property (nonatomic) BOOL hasTotalBytesSent;
@property (nonatomic) NSInteger totalBytesSent;
@property (nonatomic) BOOL hasTotalBytesReceived;
@property (nonatomic) NSInteger totalBytesReceived;
@property (nonatomic) BOOL hasBucketedLocalNonDeletedCount;
@property (nonatomic) Q bucketedLocalNonDeletedCount;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) Q duration;
- (int)protocol;
- (void)setForeground:;
- (void)setOptions:;
- (void)setProtocol:;
- (BOOL)foreground;
- (BOOL)hasDuration;
- (void)setHasDuration:;
- (void)setDidTimeout:;
- (void)writeTo:;
- (void)setTrigger:;
- (unsigned long long)hash;
- (int)trigger;
- (void)copyTo:;
- (void)setDuration:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (unsigned long long)options;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (BOOL)didTimeout;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasOptions;
- (void)setHasTrigger:;
- (BOOL)hasTrigger;
- (id)triggerAsString:;
- (int)StringAsTrigger:;
- (int)totalBytesReceived;
- (int)mailboxType;
- (void)setMailboxType:;
- (BOOL)hasProtocol;
- (void)setHasProtocol:;
- (void)setHasOptions:;
- (id)protocolAsString:;
- (int)StringAsProtocol:;
- (int)emailProvider;
- (void)setEmailProvider:;
- (void)setHasEmailProvider:;
- (BOOL)hasEmailProvider;
- (id)emailProviderAsString:;
- (int)StringAsEmailProvider:;
- (void)setHasMailboxType:;
- (BOOL)hasMailboxType;
- (id)mailboxTypeAsString:;
- (int)StringAsMailboxType:;
- (BOOL)hasMailError;
- (int)newMessagesState;
- (void)setNewMessagesState:;
- (void)setHasNewMessagesState:;
- (BOOL)hasNewMessagesState;
- (id)newMessagesStateAsString:;
- (int)StringAsNewMessagesState:;
- (void)setHasForeground:;
- (BOOL)hasForeground;
- (void)setHasDidTimeout:;
- (BOOL)hasDidTimeout;
- (void)setFetchSize:;
- (void)setHasFetchSize:;
- (BOOL)hasFetchSize;
- (void)setNumMessagesFetched:;
- (void)setHasNumMessagesFetched:;
- (BOOL)hasNumMessagesFetched;
- (int)totalBytesSent;
- (void)setTotalBytesSent:;
- (void)setHasTotalBytesSent:;
- (BOOL)hasTotalBytesSent;
- (id)totalBytesSentAsString:;
- (int)StringAsTotalBytesSent:;
- (void)setTotalBytesReceived:;
- (void)setHasTotalBytesReceived:;
- (BOOL)hasTotalBytesReceived;
- (id)totalBytesReceivedAsString:;
- (int)StringAsTotalBytesReceived:;
- (void)setBucketedLocalNonDeletedCount:;
- (void)setHasBucketedLocalNonDeletedCount:;
- (BOOL)hasBucketedLocalNonDeletedCount;
- (id)mailError;
- (void)setMailError:;
- (unsigned long long)fetchSize;
- (unsigned long long)numMessagesFetched;
- (unsigned long long)bucketedLocalNonDeletedCount;
@end

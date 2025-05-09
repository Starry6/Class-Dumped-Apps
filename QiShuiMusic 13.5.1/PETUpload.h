@interface PETUpload : PBCodable
@property (nonatomic) BOOL hasMetadata;
@property (nonatomic) PETMetadata metadata;
@property (nonatomic) NSMutableArray aggregatedMessages;
@property (nonatomic) NSMutableArray unaggregatedMessages;
@property (nonatomic) BOOL hasIsCompressed;
@property (nonatomic) BOOL isCompressed;
@property (nonatomic) BOOL hasCompressedData;
@property (nonatomic) NSData compressedData;
@property (nonatomic) BOOL hasCompressedMessages;
@property (nonatomic) NSData compressedMessages;
- (id)metadata;
- (void)writeTo:;
- (unsigned long long)hash;
- (BOOL)isCompressed;
- (void)setMetadata:;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)compressedData;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (BOOL)hasMetadata;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setCompressedData:;
- (void)clearAggregatedMessages;
- (void)addAggregatedMessages:;
- (unsigned long long)aggregatedMessagesCount;
- (id)aggregatedMessagesAtIndex:;
- (void)clearUnaggregatedMessages;
- (void)addUnaggregatedMessages:;
- (unsigned long long)unaggregatedMessagesCount;
- (id)unaggregatedMessagesAtIndex:;
- (void)setIsCompressed:;
- (void)setHasIsCompressed:;
- (BOOL)hasIsCompressed;
- (BOOL)hasCompressedData;
- (BOOL)hasCompressedMessages;
- (id)aggregatedMessages;
- (void)setAggregatedMessages:;
- (id)unaggregatedMessages;
- (void)setUnaggregatedMessages:;
- (id)compressedMessages;
- (void)setCompressedMessages:;
+ (Class)aggregatedMessagesType;
+ (Class)unaggregatedMessagesType;
@end

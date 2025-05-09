@interface GEORRRequestResponseEvent : PBCodable
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) NSInteger eventType;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) NSInteger requestType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasEventId;
@property (nonatomic) NSString eventId;
@property (nonatomic) BOOL hasUrl;
@property (nonatomic) NSString url;
@property (nonatomic) BOOL hasWithARPC;
@property (nonatomic) BOOL withARPC;
@property (nonatomic) BOOL hasError;
@property (nonatomic) NSString error;
@property (nonatomic) BOOL hasEncoded;
@property (nonatomic) NSData encoded;
- (int)requestType;
- (void)readAll:;
- (void)setRequestType:;
- (BOOL)hasRequestType;
- (BOOL)hasError;
- (id)url;
- (id)init;
- (id)requestTypeAsString:;
- (void)setHasRequestType:;
- (int)StringAsRequestType:;
- (BOOL)hasUrl;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (int)StringAsEventType:;
- (void)setError:;
- (id)initWithDictionary:;
- (void)writeTo:;
- (int)eventType;
- (void)setEventType:;
- (id)error;
- (unsigned long long)hash;
- (void)setUrl:;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (void)setHasEventType:;
- (id)initWithData:;
- (id)encoded;
- (void).cxx_destruct;
- (BOOL)hasEventType;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventTypeAsString:;
- (void)setEncoded:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasEventId;
- (id)eventId;
- (void)setEventId:;
- (BOOL)withARPC;
- (void)setWithARPC:;
- (void)setHasWithARPC:;
- (BOOL)hasWithARPC;
- (BOOL)hasEncoded;
- (id)decodeEvent;
+ (BOOL)isValid:;
@end

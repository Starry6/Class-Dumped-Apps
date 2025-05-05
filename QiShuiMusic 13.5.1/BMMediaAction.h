@interface BMMediaAction : BMEventBase
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) NSString mediaUUID;
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSInteger type;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHasAbsoluteTimestamp:;
- (BOOL)hasAbsoluteTimestamp;
- (void)writeTo:;
- (double)absoluteTimestamp;
- (void)setHasType:;
- (BOOL)hasType;
- (unsigned int)dataVersion;
- (id)initByReadFrom:;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (id)serialize;
- (BOOL)isEqual:;
- (id)initWithAbsoluteTimestamp:mediaUUID:type:;
- (id)mediaUUID;
+ (id)eventWithData:dataVersion:;
@end

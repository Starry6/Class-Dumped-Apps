@interface BMPostSiriEngagementEventSignalContent : BMEventBase
@property (nonatomic) NSString key;
@property (nonatomic) NSString value;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)key;
- (void)writeTo:;
- (unsigned int)dataVersion;
- (id)initByReadFrom:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (id)initWithKey:value:;
- (id)serialize;
- (BOOL)isEqual:;
+ (id)eventWithData:dataVersion:;
@end

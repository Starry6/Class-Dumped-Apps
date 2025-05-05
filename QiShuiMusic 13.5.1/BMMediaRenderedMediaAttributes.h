@interface BMMediaRenderedMediaAttributes : BMEventBase
@property (nonatomic) NSString UUID;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithUUID:;
- (void)writeTo:;
- (unsigned int)dataVersion;
- (id)initByReadFrom:;
- (void).cxx_destruct;
- (id)description;
- (id)serialize;
- (id)UUID;
- (BOOL)isEqual:;
+ (id)eventWithData:dataVersion:;
@end

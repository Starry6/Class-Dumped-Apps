@interface LynxVideoPlayableInvocationPayloadImpl : NSObject
@property (nonatomic) q duration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDurationInMilliseconds:;
- (long long)getDurationInMilliseconds;
- (void)setDuration:;
- (long long)duration;
@end

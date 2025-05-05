@interface CBCEModule : CBModule
@property (nonatomic) # modelClass;
@property (nonatomic) # modelInputClass;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleNotificationForKey:withProperty:;
- (void)dealloc;
- (void)start;
- (void)sendNotificationForKey:withValue:;
- (id)copyPropertyForKey:withParameter:;
- (void)stop;
- (id)copyPropertyForKey:;
- (BOOL)setProperty:forKey:;
- (Class)modelClass;
- (void)setModelClass:;
- (id)initWithQueue:ceModelID:;
- (id)setModelInputWithAlsEvent:ceInput:;
- (id)setModelInputWithXtalkArr:alsArr:alsRatioArr:X:Y:Z:CCT:u:v:lux:nits:iTime:gain:x:y:a:b:ceInput:;
- (id)copyInference:;
- (Class)modelInputClass;
- (void)setModelInputClass:;
@end

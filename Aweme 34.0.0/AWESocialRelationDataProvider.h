@interface AWESocialRelationDataProvider : HTSService
@property (nonatomic) NSHashTable observers;
@property (nonatomic) NSDictionary trackSampleConfig;
@property (nonatomic) NSArray interceptRules;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)read:completion:;
- (id)observe:handler:;
- (id)trackSampleConfig;
- (void)setTrackSampleConfig:;
- (void)notifyAllObservers:;
- (id)interceptor_readFromMemory:;
- (void)interceptor_readFromFile:completion:;
- (void)interceptor_readFromNetwork:completion:;
- (void)interceptor_write:completion:;
- (BOOL)p_shouldInterceptRequest:action:;
- (void)p_trackRequest:response:action:cost:;
- (id)interceptRules;
- (void)setInterceptRules:;
- (id)observers;
- (id)identifier;
- (void).cxx_destruct;
- (id)currentObservers;
- (void)setObservers:;
@end

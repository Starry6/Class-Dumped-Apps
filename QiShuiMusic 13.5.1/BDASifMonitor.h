@interface BDASifMonitor : NSObject
@property (nonatomic) BDASifConfiguration config;
- (void)trackAdEvent:tag:extra:adExtra:;
- (void)performanceEvent:params:;
- (void)setConfig:;
- (void).cxx_destruct;
- (id)config;
+ (id)sharedInstance;
@end

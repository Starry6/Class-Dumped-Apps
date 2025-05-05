@interface BDLReportAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)backtraceWithMessage:bySkippedDepth:;
- (void)launchSession;
- (void)reportException:;
+ (void)lynxLazyLoad;
+ (id)sharedInstance;
@end

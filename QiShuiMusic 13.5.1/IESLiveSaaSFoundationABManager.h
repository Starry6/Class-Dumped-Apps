@interface IESLiveSaaSFoundationABManager : NSObject
- (BOOL)enablePopupPan;
+ (BOOL)isUseUniversalLogger;
+ (BOOL)liveStrategyDegradeEnable;
+ (id)managerWithDIContext:;
@end

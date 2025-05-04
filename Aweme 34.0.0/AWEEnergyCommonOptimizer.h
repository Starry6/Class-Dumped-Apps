@interface AWEEnergyCommonOptimizer : NSObject
- (void)handleABTestChange;
+ (BOOL)logTypeEnabled:;
+ (BOOL)serviceTypeEnabled:;
+ (void)setLogModifyBlock:;
+ (double)getFreeDiskSpaceWithKey:;
+ (void)setupHMDOptimizer;
+ (BOOL)needUploadWithLogTypeStr:serviceName:;
+ (void)_aweLazyRegisterStaticLoad_disk_opt;
+ (id)shared;
@end

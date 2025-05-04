@interface AWEUGPendantActivityCloseManger : NSObject
@property (nonatomic) NSMutableSet closedMaterialIDSet;
- (id)closedMaterialIDSet;
- (void)recordMaterialIDClosedThisColdLaunch:;
- (BOOL)hasMaterialIDClosedThisColdLaunch:;
- (void)setClosedMaterialIDSet:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end

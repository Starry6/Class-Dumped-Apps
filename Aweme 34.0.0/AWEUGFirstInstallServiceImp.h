@interface AWEUGFirstInstallServiceImp : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)recordColdLaunch;
- (id)firstColdLaunchTime;
- (BOOL)isFirstUGColdLaunch;
- (void)recordFirstUGColdLaunch;
- (BOOL)isFirstColdLaunch;
@end

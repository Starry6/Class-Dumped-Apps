@interface AWEBatManModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)shareToImWithBatManBusinessModel:shareSchema:completion:;
- (void)addToDesktopWithBatManBusinessModel:addDesktopSchema:completion:;
- (void)queryBatManCollectWithBatManBusinessModel:completion:;
- (void)updateBatManCollectWithBatManBusinessModel:state:completion:;
- (void)registerAlertTrackerDelegateWithContext:;
@end

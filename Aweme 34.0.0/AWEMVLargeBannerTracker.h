@interface AWEMVLargeBannerTracker : NSObject
@property (nonatomic) NSMutableArray bannerShowIds;
- (void)setBannerShowIds:;
- (id)bannerShowIds;
- (void)trackForMediumVideoClientClickBannerWithModel:clickIndex:;
- (void)trackForMediumVideoClientBannerSwitchWithActionType:direction:;
- (void)trackForMediumVideoClientShowBannerWithModel:showIndex:;
- (id)init;
- (void).cxx_destruct;
@end

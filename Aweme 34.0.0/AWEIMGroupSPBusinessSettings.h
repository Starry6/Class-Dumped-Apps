@interface AWEIMGroupSPBusinessSettings : NSObject
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL SPTaskEnable;
@property (nonatomic) AWEIMGroupSPTaskSettings spTaskSettings;
@property (nonatomic) AWEIMGroupSPBannerSettings bannerSettings;
@property (nonatomic) AWEIMGroupSPImageTaskSettings imageTaskSettings;
@property (nonatomic) AWEIMGroupSPActionBarSettings acbSettings;
@property (nonatomic) AWEIMGroupSPActionBarSettings acbColorSettings;
@property (nonatomic) AWEIMGroupSPCollectCardSettings collectCardSettgins;
@property (nonatomic) AWEIMGroupSPRedPacketRainOnBoardingSettings redPacketRainOnboardingSettings;
- (BOOL)SPTaskEnable;
- (id)spTaskSettings;
- (id)bannerSettings;
- (id)imageTaskSettings;
- (id)acbSettings;
- (id)acbColorSettings;
- (id)collectCardSettgins;
- (id)redPacketRainOnboardingSettings;
- (BOOL)enable;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:;
@end

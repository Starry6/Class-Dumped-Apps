@interface AWEMusic2ChallengeGuideView : AWEBaseGuideView
@property (nonatomic) AWEMusicChallengeGuideModel guideModel;
@property (nonatomic) BOOL isCommerce;
@property (nonatomic) NSString musicID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)guideModel;
- (void)setGuideModel:;
- (id)musicID;
- (BOOL)isCommerce;
- (void)setIsCommerce:;
- (void)setMusicID:;
- (void)configAvatarImageView;
- (void)configTitleLabel;
- (void)configDescriptionLabel;
- (void)onChallengeGuideViewTapped:;
- (void)configWithMusicModel:;
- (void).cxx_destruct;
@end

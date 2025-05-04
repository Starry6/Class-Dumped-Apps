@interface AWEMusicNewChallengeGuideModel : AWEBaseDataModel
@property (nonatomic) NSString challengeName;
@property (nonatomic) NSString profileImage;
@property (nonatomic) NSString guideDesc;
@property (nonatomic) NSString openUrl;
@property (nonatomic) NSString challengeID;
- (id)openUrl;
- (id)challengeName;
- (void)setOpenUrl:;
- (void)setGuideDesc:;
- (void)setChallengeName:;
- (id)guideDesc;
- (void).cxx_destruct;
- (id)profileImage;
- (void)setProfileImage:;
- (id)challengeID;
- (void)setChallengeID:;
+ (id)JSONKeyPathsByPropertyKey;
@end

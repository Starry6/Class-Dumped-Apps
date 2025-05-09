@interface AWEMVChannelLeftBottomView : UIView
@property (nonatomic) UIImageView avatarImgView;
@property (nonatomic) UILabel subInfoLabel;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) AWEFeedInsetsLabel recallReasonLabel;
@property (nonatomic) AWEFeedInsetsLabel suffixLabel;
- (id)aAWEPadModuleAdapter;
- (void)updateWithAwemeModel:;
- (id)avatarImgView;
- (void)setAvatarImgView:;
- (id)subInfoLabel;
- (void)setSubInfoLabel:;
- (id)suffixLabel;
- (void)setSuffixLabel:;
- (id)recallReasonLabel;
- (void)buildBottomInfoWithIconLabelType:;
- (void)buildBottomInfoWithIconLabelSuffixType:;
- (void)buildBottomInfoWithLabelType:;
- (void)buildBottomInfoWithLabelAndTitleType:;
- (void)updateRecallReasonLabelColor:;
- (id)attributedStringWithAlbumInfo:font:;
- (void)setRecallReasonLabel:;
- (void)buildBottomInfoWithAuthorInfoType:aweme:;
- (id)mixBottomInfoAttributedStringWithChannelConfig:aweme:;
- (void)updateForPadMidCardWithModel:;
- (id)init;
- (void)prepareForReuse;
- (BOOL)isDarkTheme;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (void)setupUI;
+ (Class)aAWEPadModuleAdapterClass;
@end

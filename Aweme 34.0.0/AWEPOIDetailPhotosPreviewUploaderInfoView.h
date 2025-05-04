@interface AWEPOIDetailPhotosPreviewUploaderInfoView : UIView
@property (nonatomic) UIImageView userAvatar;
@property (nonatomic) MASConstraint userNameLabelToAvatarConstraints;
@property (nonatomic) UILabel userNameLabel;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) AWEPOIPhotoUploaderInfoModel uploader;
@property (nonatomic) AWEPOITrackerManager trackerManager;
- (id)trackerManager;
- (id)userAvatar;
- (id)userNameLabel;
- (void)setUserNameLabel:;
- (id)uploader;
- (void)setUploader:;
- (void)tapUserAvatar;
- (void)setUserAvatar:;
- (void)setTrackerManager:;
- (void)setUserNameLabelToAvatarConstraints:;
- (void)tapUserNameLabel;
- (void)goToUserProfileViaMethod:;
- (id)userNameLabelToAvatarConstraints;
- (void)updateWithUploaderInfo:;
- (void)setDescriptionLabel:;
- (id)intrinsicContentSize;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)descriptionLabel;
- (void)setupUI;
@end

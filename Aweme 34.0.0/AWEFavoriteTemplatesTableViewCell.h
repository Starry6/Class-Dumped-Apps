@interface AWEFavoriteTemplatesTableViewCell : UITableViewCell
@property (nonatomic) AWEAweMVTemplateModel templateModel;
@property (nonatomic) q index;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel usageAmountLabel;
@property (nonatomic) UIImageView enterDetailView;
@property (nonatomic) UIView enterDetailGestureView;
@property (nonatomic) UIButton shootButton;
@property (nonatomic) UIStackView templateStackView;
@property (nonatomic) UIView topContentView;
@property (nonatomic) UIView accessibilityContainerLeftView;
@property (nonatomic) UIView accessibilityContainerRightView;
@property (nonatomic) UIView shootButtonSpaceView;
@property (nonatomic) NSString clickEnterMethod;
@property (nonatomic) @? enterTemplateDetailBlock;
- (void)p_setupUI;
- (id)enterMethod;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)shootButton;
- (void)setShootButton:;
- (void)setTopContentView:;
- (BOOL)isNewProfileCollectLargeCharacterModeStatus;
- (BOOL)isNewProfileStyleStatus;
- (BOOL)isArrowStyleStatus;
- (BOOL)isShootSameStyleStatus;
- (void)setClickEnterMethod:;
- (id)accessibilityContainerLeftView;
- (id)accessibilityContainerRightView;
- (id)shootButtonSpaceView;
- (id)usageAmountLabel;
- (void)setEnterDetailGestureView:;
- (id)enterDetailGestureView;
- (id)enterDetailView;
- (id)enterTemplateDetailBlock;
- (id)clickEnterMethod;
- (void)p_enterDetailViewDidClicked:;
- (void)enterDetailViewDidClicked:;
- (void)setEnterTemplateDetailBlock:;
- (void)setUsageAmountLabel:;
- (void)setEnterDetailView:;
- (void)setAccessibilityContainerLeftView:;
- (void)setAccessibilityContainerRightView:;
- (void)setShootButtonSpaceView:;
- (void)p_setupNewProfileUI;
- (void)p_setupDefaultUI;
- (void)updateWithModel:index:;
- (id)templateStackView;
- (id)p_convertUsageAmountToHint:;
- (void)setTemplateStackView:;
- (void)setIndex:;
- (long long)index;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void)touchesEnded:withEvent:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)topContentView;
- (void)setTemplateModel:;
- (id)templateModel;
+ (id)identifier;
+ (double)cellHeight;
@end

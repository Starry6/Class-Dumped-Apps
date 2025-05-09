@interface AWEInTodayPrivatePostCell : UICollectionViewCell
@property (nonatomic) UIImageView inTodayCoverImageView;
@property (nonatomic) UIView inTodayTitleBGView;
@property (nonatomic) UILabel inTodayTitleLabel;
@property (nonatomic) NSShadow shadow;
@property (nonatomic) UIView inTodayAccessibilityView;
@property (nonatomic) AWEInTodayPrivatePostModel inTodayModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)actionSheet:didClickButtonAtIndex:;
- (void)configWithModel:;
- (id)inTodayCoverImageView;
- (id)inTodayTitleBGView;
- (id)inTodayTitleLabel;
- (id)inTodayAccessibilityView;
- (id)inTodayModel;
- (void)setInTodayModel:;
- (void)setInTodayCoverImageView:;
- (void)setInTodayTitleBGView:;
- (void)setInTodayTitleLabel:;
- (void)setInTodayAccessibilityView:;
- (id)shadow;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setShadow:;
- (void)setupUI;
- (void)longPressGestureRecognized:;
+ (id)identifier;
@end

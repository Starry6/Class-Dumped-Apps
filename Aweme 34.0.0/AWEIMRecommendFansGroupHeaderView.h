@interface AWEIMRecommendFansGroupHeaderView : UICollectionReusableView
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIView partingView;
@property (nonatomic) UILabel lable;
@property (nonatomic) <AWEIMRecommendFansGroupHeaderViewDelegate> delegate;
- (id)lable;
- (void)setLable:;
- (id)partingView;
- (void)__closeButtonTapped;
- (void)setPartingView:;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setCloseButton:;
- (id)closeButton;
+ (id)identifier;
+ (double)height;
@end

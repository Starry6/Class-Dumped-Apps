@interface AWEProfileHeaderProfileRecommendCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEProfileHeaderContext context;
@property (nonatomic) AWEUserProfileRecommendView profileRecommendView;
@property (nonatomic) UITapGestureRecognizer tapGesture;
@property (nonatomic) <AWEProfileHeaderProfileRecommendCollectionViewCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__setupUI;
- (void)onTapGestureAction:;
- (void)handleTapGestureWithLocation:;
- (void)configWithHeaderContext:;
- (void)__updateProfileRecommendViewWithContext:;
- (id)profileRecommendView;
- (void)setProfileRecommendView:;
- (id)delegate;
- (id)initWithFrame:;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)context;
- (id)tapGesture;
- (void)setTapGesture:;
@end

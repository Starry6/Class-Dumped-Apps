@interface AWEProfileHeaderStarAtlasGuideCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel starAtlasGuideLabel;
@property (nonatomic) UITapGestureRecognizer tapGesture;
@property (nonatomic) <AWEProfileHeaderStarAtlasGuideCollectionViewCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (void)onTapGestureAction:;
- (void)handleTapGestureWithLocation:;
- (void)configWithHeaderContext:;
- (id)starAtlasGuideLabel;
- (void)setStarAtlasGuideLabel:;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)tapGesture;
- (void)setTapGesture:;
@end

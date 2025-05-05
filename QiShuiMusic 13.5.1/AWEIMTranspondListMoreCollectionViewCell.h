@interface AWEIMTranspondListMoreCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView moreImgView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) <AWEIMTranspondListMoreCellActionDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMoreImgView:;
- (id)moreImgView;
- (void)moreTapped:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (id)nameLabel;
- (void)setNameLabel:;
- (void)updateUI;
+ (void)configWithIsHot:;
+ (id)identifier;
@end

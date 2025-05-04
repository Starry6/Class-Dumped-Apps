@interface AWETeenGeneralAuthorHeaderCell : UICollectionViewCell
@property (nonatomic) UILabel title;
@property (nonatomic) UIButton moreButton;
@property (nonatomic) @? viewMoreTappedBlock;
@property (nonatomic) BOOL canViewMore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setViewMoreTappedBlock:;
- (void)setCanViewMore:;
- (id)viewMoreTappedBlock;
- (void)clickMoreButton;
- (BOOL)canViewMore;
- (id)initWithFrame:;
- (id)moreButton;
- (void).cxx_destruct;
- (void)setMoreButton:;
- (id)title;
- (void)reset;
- (void)setTitle:;
+ (id)cellSize;
@end

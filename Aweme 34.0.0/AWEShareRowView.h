@interface AWEShareRowView : AWEShareCollectionView
@property (nonatomic) BOOL isFirstRow;
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) <AWEShareRowViewDelegate> shareDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aweme;
- (void)setAweme:;
- (void)setIsFirstRow:;
- (void)playBounceAnimationAfterDelay:;
- (id)initWithItems:hostView:;
- (void)updateCell:withItem:;
- (BOOL)isFirstRow;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (void)setShareDelegate:;
- (id)shareDelegate;
+ (Class)cellClass;
+ (double)rowHeight;
+ (id)collectionLayout;
@end

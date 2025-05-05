@interface IESECGalleryBar : UIView
@property (nonatomic) <IESECGalleryBarDelegate> delegate;
@property (nonatomic) q numberOfItems;
@property (nonatomic) q currentItem;
@property (nonatomic) double progressBarHeight;
- (id)layerFramesInBounds:;
- (double)progressBarHeight;
- (double)progressBarSpacing;
- (void)setProgressBarHeight:;
- (void)updateItemAtIndex:toProgress:;
- (void)updateLayersIfNeeded;
- (long long)numberOfItems;
- (void)dealloc;
- (void)setCurrentItem:;
- (void)layoutSubviews;
- (void)setDelegate:;
- (long long)currentItem;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setNumberOfItems:;
- (id).cxx_construct;
@end

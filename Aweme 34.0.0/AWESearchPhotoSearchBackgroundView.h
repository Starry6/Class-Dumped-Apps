@interface AWESearchPhotoSearchBackgroundView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) BlackoutView alternateBG;
@property (nonatomic) NSArray rawDetections;
@property (nonatomic) AWESearchPhotoSelectionHandleView activeHandleView;
@property (nonatomic) NSMutableArray selectionHandleViewArray;
@property (nonatomic) NSMutableArray selectionDotViewArray;
@property (nonatomic) NSArray selectionRectArray;
@property (nonatomic) Q selectedIndex;
@property (nonatomic) AWESearchPhotoSelectionHandleView customHandleView;
@property (nonatomic) AWESearchDotAnimationView customDotView;
@property (nonatomic) BOOL onlyShowImage;
@property (nonatomic) BOOL hasDragPanel;
@property (nonatomic) BOOL optimiseEnable;
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) <AWESearchPhotoSearchBackgroundViewDelegate> delegate;
@property (nonatomic) UIVisualEffectView imageEffectView;
@property (nonatomic) NSArray tabViewModels;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configUI;
- (void)configUIWithProductImage:;
- (void)setOnlyShowImage:;
- (void)configBackgroundImageIsBlock:;
- (id)alternateBG;
- (id)imageEffectView;
- (BOOL)onlyShowImage;
- (BOOL)optimiseEnable;
- (id)rawDetections;
- (void)updateDetectionArray:withSelectionIndex:;
- (void)updateSubviewFrame;
- (id)handleViewAtIndex:;
- (id)selectionHandleViewArray;
- (id)customHandleView;
- (id)selectionDotViewArray;
- (id)customDotView;
- (id)convertSelectionRectToDetctionStr:;
- (id)convertDetctionStringToDetctionRect:;
- (void)updateSelectionIndex:;
- (id)activeHandleView;
- (void)setCustomHandleView:;
- (void)showDotView:isShow:;
- (id)selectionRectArray;
- (id)createDotView;
- (void)setCustomDotView:;
- (void)updateMaskViewWithHanleViewFrame:;
- (void)setRawDetections:;
- (id)convertSelectionRectWithDetectionString:;
- (void)setSelectionRectArray:;
- (id)dotViewAtIndex:;
- (void)closeSelectionIndex:expandIndex:animated:completion:;
- (id)scrollGestureRecognizer;
- (void)handleViewSelectionChanged:;
- (void)handleViewSelectionChangeEnded:;
- (id)initWithProductImage:;
- (id)initFlowCaseWithFrame:;
- (id)initOnlyShowBackgroundWithFrame:;
- (id)initWhiteBackgroundWithFrame:;
- (id)initBlackBackgroundWithFrame:;
- (void)configOnlyShowWhiteBg;
- (id)tabViewModels;
- (id)convertImageCoordinateToViewPoint:;
- (id)createLayerWithPath:;
- (void)showDetectionExpandAnimation:atIndex:completion:;
- (void)setOptimiseEnable:;
- (void)setImageEffectView:;
- (void)setAlternateBG:;
- (void)setSelectionDotViewArray:;
- (void)setSelectionHandleViewArray:;
- (BOOL)hasDragPanel;
- (void)setHasDragPanel:;
- (void)setScrollView:;
- (void)setSelectedIndex:;
- (id)delegate;
- (id)initWithFrame:;
- (id)scrollView;
- (unsigned long long)selectedIndex;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)layoutSubviews;
- (void)setImageView:;
- (id)imageView;
- (id)detections;
- (void)updateImage:;
@end

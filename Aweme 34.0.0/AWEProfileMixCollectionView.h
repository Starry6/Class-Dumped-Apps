@interface AWEProfileMixCollectionView : UICollectionView
@property (nonatomic) @? leftLoadMoreHandle;
@property (nonatomic) BOOL fromHome;
@property (nonatomic) @? contentSizeChangeHandler;
- (id)aAWEPadModuleAdapter;
- (BOOL)fromHome;
- (void)setFromHome:;
- (id)leftLoadMoreHandle;
- (id)contentSizeChangeHandler;
- (void)setLeftLoadMoreHandle:;
- (void)setContentSizeChangeHandler:;
- (void)setContentSize:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
- (BOOL)accessibilityScroll:;
+ (Class)aAWEPadModuleAdapterClass;
@end

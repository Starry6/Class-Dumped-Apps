@interface AWETabListContainerScrollView : UIScrollView
@property (nonatomic) BOOL disableAdjustContentOffset;
- (BOOL)disableAdjustContentOffset;
- (void)setDisableAdjustContentOffset:;
- (void)_applyAutomaticAdjustedContentOffset:;
@end

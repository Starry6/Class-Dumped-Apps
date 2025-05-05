@interface IESLiveVSAlbumSelectionPortraitButton : IESLiveButton
@property (nonatomic) BOOL markLayoutComponentsIfNeeded;
- (BOOL)markLayoutComponentsIfNeeded;
- (void)setMarkLayoutComponentsIfNeeded:;
- (id)init;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (id)hitTest:withEvent:;
- (void)setup;
- (void)layoutComponents;
@end

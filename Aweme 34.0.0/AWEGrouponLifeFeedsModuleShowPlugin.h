@interface AWEGrouponLifeFeedsModuleShowPlugin : AWEGrouponLifeFeedsBasePlugin
@property (nonatomic) BOOL didTrackModuleShowEvent;
- (void)bindStateAndAction;
- (void)componentDidCompleteShow:reason:;
- (BOOL)didTrackModuleShowEvent;
- (void)setDidTrackModuleShowEvent:;
@end

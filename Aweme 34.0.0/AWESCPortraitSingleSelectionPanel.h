@interface AWESCPortraitSingleSelectionPanel : DUXSingleSelectionPanel
@property (nonatomic) <AWESCPortraitSingleSelectionPanelDelegate> delegate;
@property (nonatomic) BOOL enableSwitch;
@property (nonatomic) double maxScale;
- (BOOL)enableSwitch;
- (void)setEnableSwitch:;
- (double)maxScale;
- (id)tableView:cellForRowAtIndexPath:;
- (id)initWithFrame:;
- (void)setMaxScale:;
@end

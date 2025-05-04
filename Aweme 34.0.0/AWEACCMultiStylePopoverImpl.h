@interface AWEACCMultiStylePopoverImpl : AWEACCMultiStyleAlertTemplateImpl
@property (nonatomic) AWEPopoverActionSheet popoverView;
@property (nonatomic) DUXPopover duxPopover;
- (void)setPopoverView:;
- (void)setDuxPopover:;
- (id)duxPopover;
- (id)trackerType;
- (unsigned long long)transDUXPopoverPosition:;
- (id)getDUXPopoverTargetPointWithPosition:sourceRect:;
- (id)popoverView;
- (void)show;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setupView;
- (id)createParams;
@end

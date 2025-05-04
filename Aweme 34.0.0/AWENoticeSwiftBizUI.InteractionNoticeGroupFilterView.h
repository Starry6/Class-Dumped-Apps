@interface AWENoticeSwiftBizUI.InteractionNoticeGroupFilterView : UIView
@property (nonatomic) NSString accessibilityLabel;
- (void)handleTapContainerViewGesture:;
- (void)cancelGestureTapped;
- (id)accessibilityLabel;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (void)tableView:didSelectRowAtIndexPath:;
- (id)initWithFrame:;
- (void)setAccessibilityLabel:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end

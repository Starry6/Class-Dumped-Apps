@interface AWESegmentHomeComponent : AWEUserHomeBaseComponent
@property (nonatomic) BOOL hasChecked;
@property (nonatomic) DUXPopover popover;
@property (nonatomic) AWERLSegmentView segmentView;
@property (nonatomic) Q cornerStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)segmentView;
- (void)setSegmentView:;
- (BOOL)checkCanShowPopover;
- (void)onTabList:didScroll:;
- (void)createPopoverProfileTabType:content:popoverBlock:;
- (unsigned long long)cornerStatus;
- (void)setCornerStatus:;
- (BOOL)hasChecked;
- (void)setHasChecked:;
- (id)popover;
- (void).cxx_destruct;
- (void)setPopover:;
- (void)onInit;
@end

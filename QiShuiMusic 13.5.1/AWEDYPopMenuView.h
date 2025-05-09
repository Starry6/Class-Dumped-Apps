@interface AWEDYPopMenuView : UIView
@property (nonatomic) UITableView tableView;
@property (nonatomic) NSArray tableData;
@property (nonatomic) @? action;
@property (nonatomic) Q type;
@property (nonatomic) Q atype;
@property (nonatomic) q selectIndex;
@property (nonatomic) NSArray array;
@property (nonatomic) double itemWidth;
@property (nonatomic) @? hideHandle;
@property (nonatomic) {CGPoint=dd} trianglePoint;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSelectIndex:;
- (unsigned long long)atype;
- (id)hideHandle;
- (id)initWithItems:width:triangleLocation:type:arrowtype:action:;
- (long long)selectIndex;
- (void)setAtype:;
- (void)setHideHandle:;
- (void)setTrianglePoint:;
- (id)trianglePoint;
- (void)drawRect:;
- (id)tableView:cellForRowAtIndexPath:;
- (void)hide;
- (void)setType:;
- (id)action;
- (id)array;
- (void)show;
- (void)setAction:;
- (void)setItemWidth:;
- (double)itemWidth;
- (unsigned long long)type;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (void)setArray:;
- (void)setTableView:;
- (id)tableView;
- (long long)tableView:numberOfRowsInSection:;
- (void)tap;
- (id)tableData;
- (void)setTableData:;
@end

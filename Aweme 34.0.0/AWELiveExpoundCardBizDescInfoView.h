@interface AWELiveExpoundCardBizDescInfoView : UIView
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UITableView attrTableView;
@property (nonatomic) AWELiveExpoundCardBizDescInfo bizDescInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)descLabel;
- (void)setDescLabel:;
- (id)attrTableView;
- (BOOL)isValidBizDescInfo:;
- (void)setBizDescInfo:;
- (id)bizDescInfo;
- (void)updateTitleLabelWithBizDescInfo:;
- (BOOL)isTitleTwoLine:;
- (void)updateViewWithBizDescInfo:;
- (void)setAttrTableView:;
- (id)tableView:viewForHeaderInSection:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (double)tableView:heightForHeaderInSection:;
- (double)tableView:heightForFooterInSection:;
- (id)tableView:viewForFooterInSection:;
- (void)setupUI;
@end

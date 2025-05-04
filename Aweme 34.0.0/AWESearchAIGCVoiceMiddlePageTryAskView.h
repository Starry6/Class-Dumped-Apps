@interface AWESearchAIGCVoiceMiddlePageTryAskView : UIView
@property (nonatomic) UILabel title;
@property (nonatomic) UITableView tableView;
@property (nonatomic) NSArray queryData;
@property (nonatomic) @? clickAskQuery;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)clickAskQuery;
- (void)setClickAskQuery:;
- (void)setQueryData:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (id)init;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (id)tableView;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (id)title;
- (void)setTitle:;
- (void)setupSubviews;
- (id)queryData;
@end

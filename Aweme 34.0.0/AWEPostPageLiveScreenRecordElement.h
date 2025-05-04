@interface AWEPostPageLiveScreenRecordElement : AWEPostPageCellElement
@property (nonatomic) AWEPublishPushToTableViewCell publishToTableViewCell;
@property (nonatomic) AWEStudioRepoLiveModel liveModel;
- (id)publishViewModel;
- (id)liveModel;
- (void)setupCell:;
- (id)publishToTableViewCell;
- (void)p_publishToCellClicked;
- (void)setPublishToTableViewCell:;
- (id)privacy;
- (id)service;
- (BOOL)isVisible;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (id)cell;
- (void)didSelect;
+ (void)_aweLazyRegisterPostPage;
+ (id)type;
@end

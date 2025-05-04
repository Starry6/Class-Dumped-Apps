@interface AWESharePanelListIMCellModel : NSObject
@property (nonatomic) <AWEShareTask> task;
@property (nonatomic) NSArray transpondShareModelList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) <AWESharePanelListItem> listItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)transpondShareModelList;
- (void)setTranspondShareModelList:;
- (id)initWithListItem:;
- (void)setTask:;
- (id)cellType;
- (void)setHasMore:;
- (id)task;
- (void)reload;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (id)listItem;
- (void)setListItem:;
- (id)cellIdentifier;
- (double)cellHeight;
@end

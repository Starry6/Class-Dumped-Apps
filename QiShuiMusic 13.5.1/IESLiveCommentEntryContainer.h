@interface IESLiveCommentEntryContainer : UIView
@property (nonatomic) UIView<IESLiveCommentEntryViewProtocol> currentCommentEntry;
@property (nonatomic) <IESLiveMonitor> monitor;
@property (nonatomic) NSMutableArray entrysSwitchedList;
@property (nonatomic) NSMutableSet entrySwitchedSet;
@property (nonatomic) IESLiveCommentEntryStore store;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentCommentEntry;
- (id)entrySwitchedSet;
- (id)entrysSwitchedList;
- (void)monitorCommentEntrySwitchErrorState;
- (void)monitorCommentEntrySwitchFrom:toType:beginTime:;
- (id)pluginLayoutContentSize;
- (void)setCurrentCommentEntry:;
- (void)setEntrySwitchedSet:;
- (void)setEntrysSwitchedList:;
- (void)switchCommentEntry:;
- (id)viewType;
- (void)setStore:;
- (void)setMonitor:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)monitor;
- (id)store;
@end

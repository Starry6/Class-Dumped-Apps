@interface IESECLiveReplayRitTagView : UIView
@property (nonatomic) IESECLiveIconsContentGroupView ritsTagView;
@property (nonatomic) IESECLiveReplayDataStore dataStore;
@property (nonatomic) @? tagTotalWidthDidUpdate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRitsTagView:;
- (void)clickUserRightsView:;
- (void)dataStoreChanged;
- (id)ritsTagView;
- (void)setTagTotalWidthDidUpdate:;
- (id)tagTotalWidthDidUpdate;
- (void)setDataStore:;
- (id)dataStore;
- (void)update:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
@end

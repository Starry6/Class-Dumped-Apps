@interface IESLiveSaaSSyncFollowFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
@property (nonatomic) IESLiveSaaSSyncFollowApi syncFollowApi;
@property (nonatomic) IESLiveSaaSSyncFollowStore store;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)arrayToJson:;
- (void)componentDidMount;
- (void)componentUnmount;
- (id)roomModel;
- (void)setRoomModel:;
- (void)setSyncFollowApi:;
- (void)showSyncFollowPopup;
- (id)syncFollowApi;
- (void)syncFollowPopupIfNeeded;
- (void)setStore:;
- (void).cxx_destruct;
- (id)store;
+ (id)componentWithRoom:trackContext:componentContext:;
@end

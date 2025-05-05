@interface IESLiveSaaSRoomActionFragment : IESLiveRoomComponent
@property (nonatomic) RACCompoundDisposable disposable;
@property (nonatomic) NSDictionary roomInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_setupActions;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)didReceivedFinishMessage;
- (id)disposable;
- (void)liveDidCloseAllRoom;
- (void)liveWillEnd;
- (void)liveWillStart;
- (id)roomInfo;
- (void)setDisposable:;
- (void)setRoomInfo:;
- (void).cxx_destruct;
+ (id)componentWithRoom:trackContext:componentContext:;
@end

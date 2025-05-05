@interface IESLiveSaaSDouyinTeenModeFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) IESLiveSaaSComponentContext componentContext;
@property (nonatomic) IESLiveSaaSDouyinTeenModeApi teenModeApi;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTeenModeApi:;
- (id)appendParamsWithRoom:;
- (void)checkAweTeenModeStateFinished:;
- (void)checkAweTeenModeStateWithForceRefresh:finished:;
- (void)componentDidMount;
- (id)initWithRoom:trackContext:componentContext:;
- (id)teenModeApi;
- (void).cxx_destruct;
+ (id)componentWithRoom:trackContext:componentContext:;
@end

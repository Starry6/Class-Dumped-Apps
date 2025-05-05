@interface TestCNUIUserActionContext : NSObject
@property (nonatomic) NSString channelIdentifier;
@property (nonatomic) BOOL actionExecutionWasAttemted;
@property (nonatomic) <CNUIUserActionURLOpener> urlOpener;
@property (nonatomic) <CNUIUserActionUserActivityOpener> userActivityOpener;
@property (nonatomic) <CNUIUserActionDialRequestOpener> dialRequestOpener;
@property (nonatomic) <CNUIUserActionRecorder> actionRecorder;
@property (nonatomic) <CNUIUserActionCurator> actionCurator;
@property (nonatomic) BSServiceConnectionEndpoint connectionEndpoint;
@property (nonatomic) BOOL isOriginatingFromFavorites;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)actionRecorder;
- (void).cxx_destruct;
- (id)nilValue;
- (id)urlOpener;
- (id)userActivityOpener;
- (id)dialRequestOpener;
- (id)actionCurator;
- (id)channelIdentifier;
- (void)setChannelIdentifier:;
- (BOOL)actionExecutionWasAttemted;
- (void)setActionExecutionWasAttemted:;
@end

@interface AWEIMGroupChatPanelControllerAction : NSObject
@property (nonatomic) q actionType;
@property (nonatomic) NSDictionary associateValue;
@property (nonatomic) NSDictionary trackDict;
@property (nonatomic) <AWEIMGroupChatPanelControllerDelegate> delegate;
@property (nonatomic) RxScheduler scheduler;
- (void)setTrackDict:;
- (id)trackDict;
- (id)associateValue;
- (id)initWithType:associateValue:trackDict:;
- (void)setAssociateValue:;
- (long long)actionType;
- (void)setActionType:;
- (id)delegate;
- (void)setScheduler:;
- (id)scheduler;
- (void).cxx_destruct;
- (void)setDelegate:;
@end

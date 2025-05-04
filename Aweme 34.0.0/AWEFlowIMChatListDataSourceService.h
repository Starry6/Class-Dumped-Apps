@interface AWEFlowIMChatListDataSourceService : NSObject
@property (nonatomic) NSObject<IESIMBusinessServiceStickOnTopDelegate> stickOnTopDelegate;
@property (nonatomic) AWEIMChatListServiceRegisterConfigModel config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)stickOnTopDelegate;
- (void)getChatListServiceModelsWithRequestModel:completion:;
- (id)getLocalChatListServiceModels;
- (void)didTriggerCellEventWithAction:;
- (BOOL)enableAddCurrentCellActionWithType:serviceModel:;
- (BOOL)enableFlowTopStatusMigration;
- (void)setStickOnTopDelegate:;
- (id)initForThreadSafe;
- (void)setConfig:;
- (id)init;
- (id)config;
- (long long)serviceType;
- (void).cxx_destruct;
@end

@interface AWEPOITempoService : HTSService
@property (nonatomic) NSMutableArray placeholder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (void)registerLogger:;
- (void)handleBroadcastNotification:;
- (void)onRunloopIdle:;
- (id)generateGlobalProps;
- (void)registerBasicAppMethod:;
- (void)registerTemplateProvider;
- (BOOL)trackWithSession:args:responder:;
- (id)getValidDitoViewController:;
- (void)setPlaceholder:;
- (id)placeholder;
- (void).cxx_destruct;
@end

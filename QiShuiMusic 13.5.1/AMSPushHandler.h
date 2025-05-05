@interface AMSPushHandler : NSObject
@property (nonatomic) NSDictionary enabledParsables;
@property (nonatomic) <AMSPushHandlerContract> bagContract;
@property (nonatomic) <AMSBagProtocol> bag;
@property (nonatomic) <AMSPushHandlerDelegate> delegate;
@property (nonatomic) AMSPushConfiguration configuration;
- (void)_handlePushNotification:;
- (void)handleNotification:;
- (id)bagContract;
- (void)dealloc;
- (void)setDelegate:;
- (id)enabledParsables;
- (BOOL)shouldHandleNotification:;
- (id)initWithConfiguration:bag:;
- (id)configuration;
- (id)delegate;
- (void).cxx_destruct;
- (void)registerForEngagementPushes;
- (id)bag;
- (id)initWithConfiguration:bagContract:;
@end

@interface BDStrategyProviderManager : NSObject
@property (nonatomic) NSArray providers;
@property (nonatomic) <BDStrategyUpdateProtocol> delegate;
- (void)addNotification;
- (id)fetchStrategy;
- (void)fetchStrategyAndPreprocess;
- (void)listenStrategyUpdate;
- (void)registerStrategyProvider:;
- (void)removeNotification;
- (id)init;
- (void)dealloc;
- (void)setProviders:;
- (void)setDelegate:;
- (id)providers;
- (id)delegate;
- (void).cxx_destruct;
@end

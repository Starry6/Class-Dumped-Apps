@interface AWEMemoriesPlayerBaseComponent : NSObject
@property (nonatomic) <IESServiceProvider> context;
@property (nonatomic) <AWEMemoriesPlayerContainerService> containerController;
@property (nonatomic) <IESServiceProvider> serviceProvider;
@property (nonatomic) AWEMemoriesPlayerContext playerContext;
@property (nonatomic) AWEMemoriesPlayerConfigManager playerConfigManager;
@property (nonatomic) AWEMemoriesPlayerControlManager playerControlManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)containerController;
- (id)playerContext;
- (void)setPlayerContext:;
- (id)serviceBinding;
- (id)playerControlManager;
- (void)setPlayerControlManager:;
- (void)setPlayerConfigManager:;
- (id)playerConfigManager;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)serviceProvider;
@end

@interface IESECMallShopMomentChannel : NSObject
@property (nonatomic) IESECMallShopMomentContext context;
@property (nonatomic) IESECMallShopMomentViewController vc;
@property (nonatomic) BOOL isFirstLaunchChannel;
@property (nonatomic) <IESECMallChannelConfigProtocol> config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)channelContextDidChange:;
- (void)channelEnterWithModel:;
- (void)channelLeaveWithModel:;
- (void)clearWhileMemoryDanger;
- (void)configContainerRealOpenTime:;
- (id)getContentViewController;
- (BOOL)isFirstLaunchChannel;
- (void)mallShoppingTabDidFirstScreen;
- (void)setIsFirstLaunchChannel:;
- (void)setVc:;
- (id)context;
- (void)setConfig:;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (id)config;
- (void)setContext:;
- (id)vc;
@end

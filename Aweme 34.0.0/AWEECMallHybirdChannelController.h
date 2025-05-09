@interface AWEECMallHybirdChannelController : NSObject
@property (nonatomic) UIViewController<IESECMallChannelViewControllerProtocol> contentVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isFirstLaunchChannel;
@property (nonatomic) <IESECMallChannelConfigProtocol> config;
- (void)channelEnterWithModel:;
- (void)channelLeaveWithModel:;
- (id)contentVC;
- (void)setContentVC:;
- (id)getContentViewController;
- (void)preCreateContainer;
- (unsigned long long)p_needPreCreateContainer;
- (void)channelContextDidChange:;
- (id)lynxTemplates;
- (void)trackPreloadTemplate:;
- (void)preDownloadTemplates;
- (BOOL)isFirstLaunchChannel;
- (void)setIsFirstLaunchChannel:;
- (void)channelDidLoad;
- (void)channelDidUnload;
- (void)configContainerRealOpenTime:;
- (void)clearWhileMemoryDanger;
- (void)mallShoppingTabDidFirstScreen;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (void).cxx_destruct;
@end

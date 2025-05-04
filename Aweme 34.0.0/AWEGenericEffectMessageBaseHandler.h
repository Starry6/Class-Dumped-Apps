@interface AWEGenericEffectMessageBaseHandler : NSObject
@property (nonatomic) <IESServiceProvider> serviceProvider;
@property (nonatomic) AWEVideoPublishViewModel repository;
@property (nonatomic) <AWEGenericEffectMessageSender> messageSender;
- (id)bizIdentifier;
- (id)initWithServiceContainer:repository:;
- (BOOL)canHandle:arg3Info:;
- (void)handleMessage:arg3Info:isGlobal:;
- (id)repository;
- (void).cxx_destruct;
- (id)messageSender;
- (void)setMessageSender:;
- (void)setRepository:;
- (id)serviceProvider;
- (void)setServiceProvider:;
@end

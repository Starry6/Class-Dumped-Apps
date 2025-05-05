@interface IESMMEffectConnector : NSObject
@property (nonatomic) IESMMEffectConfig config;
@property (nonatomic) ^v renderHandle;
@property (nonatomic) <IESMMEffectConnectorDelegate> delegate;
@property (nonatomic) @? messageHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)destory;
- (void)bef_effect_clear_event;
- (id)initWithConfig:effectHandle:;
- (void)messageCenter:didReceiveMessage:;
- (void)ntf_messageCenter:;
- (id)renderHandle;
- (void)sendMessageToEffect:;
- (void)setRenderHandle:;
- (void)active;
- (void)dealloc;
- (void)setConfig:;
- (void)setDelegate:;
- (void)inactive;
- (id)messageHandler;
- (id)delegate;
- (void).cxx_destruct;
- (id)config;
- (void)setMessageHandler:;
@end

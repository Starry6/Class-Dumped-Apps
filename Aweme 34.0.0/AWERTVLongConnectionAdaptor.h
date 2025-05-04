@interface AWERTVLongConnectionAdaptor : NSObject
@property (nonatomic) <IESLCMessageHandlerProtocol> messageHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLCConnectManagerProtocol> connectManager;
- (void)ieslc_messageHandler:didReceiveMsg:;
- (void)ieslc_onConnectionStateChanged:connectionState:url:;
- (id)init;
+ (id)sharedInstance;
@end

@interface IESSaaSTIMOEnterConversationNotifyHandler : NSObject
@property (nonatomic) <IESSaaSTIMOEnterConversationObserverDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServerPushedNewApply:type:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end

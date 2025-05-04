@interface AWEECOMIMDynamicCardBridgeContext : NSObject
@property (nonatomic) UIView activeView;
@property (nonatomic) NSString uniqueID;
@property (nonatomic) NSString clickUUID;
@property (nonatomic) NSMutableDictionary result;
@property (nonatomic) <AWEECOMIMDynamicCardBridgeManagerProtocol> bridgeManager;
- (id)bridgeManager;
- (void)setBridgeManager:;
- (id)clickUUID;
- (void)setClickUUID:;
- (id)init;
- (id)uniqueID;
- (void)setUniqueID:;
- (void).cxx_destruct;
- (id)result;
- (id)activeView;
- (void)setActiveView:;
@end

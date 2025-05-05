@interface BDXBridgeSettings : NSObject
@property (nonatomic) BOOL lynxBridgeEnabled;
@property (nonatomic) BOOL webBridgeEnabled;
@property (nonatomic) BOOL injectOldProtocol;
@property (nonatomic) NSSet legacyProtocolMethods;
@property (nonatomic) BOOL iesBridgeEngineForBDXBridgeEnabled;
- (BOOL)iesBridgeEngineForBDXBridgeEnabled;
- (BOOL)injectOldProtocol;
- (id)legacyProtocolMethods;
- (BOOL)lynxBridgeEnabled;
- (void)setIesBridgeEngineForBDXBridgeEnabled:;
- (void)setInjectOldProtocol:;
- (void)setLegacyProtocolMethods:;
- (void)setLynxBridgeEnabled:;
- (void)setWebBridgeEnabled:;
- (BOOL)webBridgeEnabled;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end

@interface CJPayBridgePlugin_ocr : TTBridgePlugin
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSDictionary trackBaseParam;
@property (nonatomic) NSString appId;
@property (nonatomic) NSString merchantId;
@property (nonatomic) TTBridgeCommand command;
- (void)event:params:;
- (void)ocrWithParams:callback:engine:controller:command:;
- (void)p_openBankCardOCRWithParam:callback:controller:;
- (void)p_openIDCardFrontOCRWithParam:callback:controller:;
- (void)p_openIDCardOCRWithParam:callback:controller:;
- (void)setTrackBaseParam:;
- (id)trackBaseParam;
- (id)appId;
- (void)setAppId:;
- (id)command;
- (void).cxx_destruct;
- (void)setCommand:;
- (id)merchantId;
- (void)setMerchantId:;
+ (void)registerBridge;
@end

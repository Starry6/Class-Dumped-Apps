@interface AWEOFGBridgeMessage : NSObject
@property (nonatomic) NSString methodName;
@property (nonatomic) NSString methodType;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSURL invokeURL;
@property (nonatomic) NSString callbackID;
@property (nonatomic) NSString JSSDKVersion;
@property (nonatomic) NSString clientKey;
@property (nonatomic) NSString sourceURL;
- (id)callbackID;
- (void)setCallbackID:;
- (id)JSSDKVersion;
- (void)setJSSDKVersion:;
- (void)setMethodType:;
- (id)methodType;
- (id)invokeURL;
- (void)setInvokeURL:;
- (id)clientKey;
- (id)sourceURL;
- (void)setClientKey:;
- (void).cxx_destruct;
- (void)setSourceURL:;
- (id)params;
- (id)initWithMessage:;
- (void)setParams:;
- (id)methodName;
- (void)setMethodName:;
@end

@interface CSJJSB3ExecuteUnitModel : NSObject
@property (nonatomic) NSString JSSDKVersion;
@property (nonatomic) NSString msgType;
@property (nonatomic) NSString callbackId;
@property (nonatomic) NSString func;
@property (nonatomic) NSDictionary params;
- (id)JSSDKVersion;
- (id)callbackId;
- (id)func;
- (void)setCallbackId:;
- (void)setFunc:;
- (void)setJSSDKVersion:;
- (id)init;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
- (id)msgType;
- (void)setMsgType:;
@end

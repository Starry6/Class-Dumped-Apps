@interface BDNativeBridgeObject : NSObject
@property (nonatomic) NSString functionName;
@property (nonatomic) NSString callbackId;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSString iFrameID;
- (id)callbackId;
- (id)iFrameID;
- (void)setCallbackId:;
- (void)setIFrameID:;
- (id)functionName;
- (void).cxx_destruct;
- (id)params;
- (void)setFunctionName:;
- (void)setParams:;
@end

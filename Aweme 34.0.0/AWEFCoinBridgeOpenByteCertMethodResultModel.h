@interface AWEFCoinBridgeOpenByteCertMethodResultModel : BDXBridgeModel
@property (nonatomic) NSNumber errorCode;
@property (nonatomic) NSString errorMsg;
@property (nonatomic) NSDictionary extData;
- (void)setErrorMsg:;
- (id)errorMsg;
- (id)extData;
- (void)setExtData:;
- (void)setErrorCode:;
- (id)errorCode;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

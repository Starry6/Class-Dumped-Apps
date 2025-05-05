@interface BDUGLuckyCatRewardVideoAdXBridgeResultModel : BDXBridgeModel
@property (nonatomic) NSNumber errorCode;
@property (nonatomic) NSString errorMsg;
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSDictionary extraData;
- (id)errorMsg;
- (void)setErrorMsg:;
- (void)setStatusCode:;
- (id)statusCode;
- (id)errorCode;
- (void)setErrorCode:;
- (void).cxx_destruct;
- (void)setExtraData:;
- (id)extraData;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface IESLiveOpenByteCertDataModel : IESLiveBridgeModel
@property (nonatomic) NSNumber errorCode;
@property (nonatomic) NSString errorMsg;
@property (nonatomic) NSDictionary extData;
- (id)extData;
- (id)errorMsg;
- (void)setErrorMsg:;
- (void)setExtData:;
- (id)errorCode;
- (void)setErrorCode:;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end

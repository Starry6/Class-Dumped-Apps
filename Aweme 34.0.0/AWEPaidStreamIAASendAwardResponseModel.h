@interface AWEPaidStreamIAASendAwardResponseModel : AWEBaseApiModel
@property (nonatomic) NSNumber errorCode;
@property (nonatomic) NSString errorMessage;
@property (nonatomic) NSString sendRewardSuccessToastText;
@property (nonatomic) NSInteger growthSendRewardCode;
- (id)sendRewardSuccessToastText;
- (int)growthSendRewardCode;
- (void)setSendRewardSuccessToastText:;
- (void)setGrowthSendRewardCode:;
- (void)setErrorCode:;
- (id)errorCode;
- (id)errorMessage;
- (void).cxx_destruct;
- (void)setErrorMessage:;
+ (id)JSONKeyPathsByPropertyKey;
@end

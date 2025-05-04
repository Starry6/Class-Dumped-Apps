@interface AWENegativeFeedbackInfoModel : NSObject
@property (nonatomic) Q actionType;
@property (nonatomic) NSString negativeFeedbackInfoType;
@property (nonatomic) double actionTimeStamp;
@property (nonatomic) @ value;
- (id)initWithNegativeFeedbackActionType:negativeFeedbackInfoType:value:;
- (id)negativeFeedbackInfoType;
- (double)actionTimeStamp;
- (void)setNegativeFeedbackInfoType:;
- (void)setActionTimeStamp:;
- (id)initWithNegativeFeedbackActionType:negativeFeedbackInfoType:awemeModel:;
- (id)initWithNegativeFeedbackActionType:negativeFeedbackInfoType:musicModel:;
- (id)initWithNegativeFeedbackActionType:negativeFeedbackInfoType:userModel:;
- (id)initWithNegativeFeedbackActionType:negativeFeedbackInfoType:textExtraModel:;
- (id)initWithNegativeFeedbackActionType:negativeFeedbackInfoType:typesTagArray:;
- (void)logNegativeInfoModelDescription;
- (BOOL)isEqualToFeedbackInfoModel:;
- (void)updateNegativeFeedbackInfoTimeStamp;
- (id)value;
- (unsigned long long)actionType;
- (void)setActionType:;
- (void)encodeWithCoder:;
- (void)setValue:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)initWithCoder:;
- (id)copyWithZone:;
@end

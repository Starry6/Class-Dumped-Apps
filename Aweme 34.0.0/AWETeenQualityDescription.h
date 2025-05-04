@interface AWETeenQualityDescription : NSObject
@property (nonatomic) q errorTypeValue;
@property (nonatomic) q descriptionCodeValue;
@property (nonatomic) NSString errorMsg;
@property (nonatomic) NSString descriptionTypeValue;
@property (nonatomic) q triggerType;
@property (nonatomic) q cancleType;
@property (nonatomic) NSString cancleMsg;
- (void)setErrorMsg:;
- (id)errorMsg;
- (void)setErrorTypeValue:;
- (void)setDescriptionCodeValue:;
- (void)setCancleType:;
- (void)setCancleMsg:;
- (void)setDescriptionTypeValue:;
- (long long)errorTypeValue;
- (long long)descriptionCodeValue;
- (id)descriptionTypeValue;
- (long long)cancleType;
- (id)cancleMsg;
- (void).cxx_destruct;
- (long long)triggerType;
- (void)setTriggerType:;
@end

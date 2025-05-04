@interface AWEPaidStreamIAAAwardConfigResponseModel : AWEBaseApiModel
@property (nonatomic) AWEPaidStreamIAAAwardConfigModel currentAwardConfig;
@property (nonatomic) AWEPaidStreamIAAAwardConfigModel nextAwardConfig;
@property (nonatomic) BOOL hasConsequentAwardConfig;
@property (nonatomic) NSNumber errorCode;
@property (nonatomic) NSString errorMessage;
- (id)currentAwardConfig;
- (void)setCurrentAwardConfig:;
- (id)nextAwardConfig;
- (void)setNextAwardConfig:;
- (BOOL)hasConsequentAwardConfig;
- (void)setHasConsequentAwardConfig:;
- (void)setErrorCode:;
- (id)errorCode;
- (id)errorMessage;
- (void).cxx_destruct;
- (void)setErrorMessage:;
+ (id)currentAwardConfigJSONTransformer;
+ (id)nextAwardConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

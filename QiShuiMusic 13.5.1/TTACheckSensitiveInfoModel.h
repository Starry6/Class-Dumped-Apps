@interface TTACheckSensitiveInfoModel : NSObject
@property (nonatomic) q errorCode;
@property (nonatomic) NSString descriptionMsg;
@property (nonatomic) NSDictionary matchResult;
- (void)setMatchResult:;
- (id)descriptionMsg;
- (id)matchResult;
- (void)setDescriptionMsg:;
- (long long)errorCode;
- (void)setErrorCode:;
- (void).cxx_destruct;
+ (id)tta_modelCustomPropertyMapper;
@end

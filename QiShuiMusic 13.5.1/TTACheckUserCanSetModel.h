@interface TTACheckUserCanSetModel : NSObject
@property (nonatomic) BOOL canSet;
@property (nonatomic) q errorCode;
@property (nonatomic) NSString descriptionMsg;
- (BOOL)canSet;
- (id)descriptionMsg;
- (void)setCanSet:;
- (void)setDescriptionMsg:;
- (long long)errorCode;
- (void)setErrorCode:;
- (void).cxx_destruct;
+ (id)tta_modelCustomPropertyMapper;
@end

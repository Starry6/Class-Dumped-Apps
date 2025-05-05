@interface TTACheckMobileRegisteredModel : TTADataRespModel
@property (nonatomic) BOOL isRegistered;
- (BOOL)isRegistered;
- (void)setIsRegistered:;
+ (id)tta_modelCustomPropertyMapper;
@end

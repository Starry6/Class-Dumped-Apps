@interface IESECEcVerifyReportParamModel : IESLiveBridgeModel
@property (nonatomic) IESECEcVerifyReportErrorContentModel errorContent;
@property (nonatomic) NSNumber localRemindType;
- (id)localRemindType;
- (void)setLocalRemindType:;
- (void).cxx_destruct;
- (void)setErrorContent:;
- (id)errorContent;
+ (id)modelCustomPropertyMapper;
@end

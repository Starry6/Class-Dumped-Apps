@interface IESECEcVerifyReportErrorContentModel : IESLiveBridgeModel
@property (nonatomic) NSString params;
@property (nonatomic) NSString context;
@property (nonatomic) NSString errorEvent;
@property (nonatomic) NSArray errorList;
- (id)errorEvent;
- (id)errorList;
- (void)setErrorEvent:;
- (void)setErrorList:;
- (id)context;
- (void).cxx_destruct;
- (void)setContext:;
- (id)params;
- (void)setParams:;
+ (id)modelCustomPropertyMapper;
@end

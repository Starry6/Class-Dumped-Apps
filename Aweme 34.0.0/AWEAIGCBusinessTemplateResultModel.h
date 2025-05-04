@interface AWEAIGCBusinessTemplateResultModel : AWEAIGCBaseBusinessCustomModel
@property (nonatomic) q errorCode;
@property (nonatomic) NSString errorMessage;
@property (nonatomic) NSDictionary resources;
@property (nonatomic) NSDictionary images;
- (id)images;
- (id)resources;
- (void)setErrorCode:;
- (long long)errorCode;
- (void)setResources:;
- (id)errorMessage;
- (void)setImages:;
- (void).cxx_destruct;
- (void)setErrorMessage:;
@end

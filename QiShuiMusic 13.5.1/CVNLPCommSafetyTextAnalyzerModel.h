@interface CVNLPCommSafetyTextAnalyzerModel : NSObject
- (void).cxx_destruct;
- (id)description;
- (id)initWithModel:className:threshold:;
- (BOOL)detectSensitivityForString:;
@end

@interface ETTaskClassifier : ETTask
@property (nonatomic) NSArray class_names;
- (id)initWithModelDef:optimizerDef:extractor:;
- (id)initWithModelDef:optimizerDef:extractor:needWeightsInitialization:;
- (id)class_names;
- (void)setClass_names:;
@end

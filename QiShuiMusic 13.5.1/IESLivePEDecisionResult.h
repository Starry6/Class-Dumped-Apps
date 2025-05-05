@interface IESLivePEDecisionResult : NSObject
@property (nonatomic) NSDictionary feature;
@property (nonatomic) NSDictionary trigger;
@property (nonatomic) NSString scene;
@property (nonatomic) HTSLiveDefaultResult defaultValue;
@property (nonatomic) HTSLiveASTNode output;
- (id)outputDictionaryWithDefault;
- (id)outputNumberWithDefault;
- (id)outputStringWithDefault;
- (id)outputValueWithDefault;
- (id)output;
- (void)setFeature:;
- (id)feature;
- (void)setScene:;
- (void)setDefaultValue:;
- (void)setTrigger:;
- (void)setOutput:;
- (id)defaultValue;
- (id)scene;
- (id)trigger;
- (void).cxx_destruct;
@end

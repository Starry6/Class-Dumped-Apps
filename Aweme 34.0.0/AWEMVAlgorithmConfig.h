@interface AWEMVAlgorithmConfig : MTLModel
@property (nonatomic) NSArray imagPath;
@property (nonatomic) NSString algorithmName;
@property (nonatomic) BOOL needServerExcute;
@property (nonatomic) NSString algorithmParamJson;
@property (nonatomic) Q algorithmResultType;
@property (nonatomic) BOOL multiInput;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAlgorithmParamJson:;
- (void)setAlgorithmResultType:;
- (void)setNeedServerExcute:;
- (unsigned long long)algorithmResultType;
- (BOOL)needServerExcute;
- (id)algorithmParamJson;
- (BOOL)multiInput;
- (void)setMultiInput:;
- (id)imagPath;
- (id)initWithVEConfig:;
- (void)setImagPath:;
- (void).cxx_destruct;
- (id)algorithmName;
- (void)setAlgorithmName:;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface MLSDKInferenceEngine : NSObject
@property (nonatomic) NSMutableDictionary params;
@property (nonatomic) NSMutableArray paramsPre;
@property (nonatomic) NSString url;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)changeInputParamFormat:;
- (id)getPlayTimeMLModel;
- (id)paramsPre;
- (void)predictWithParam:engineCallback:;
- (void)setParamsPre:;
- (id)url;
- (void)prepare;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
- (id)initWithUrl:;
@end

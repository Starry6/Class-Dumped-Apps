@interface AWEHPLandingPitayaResultModel : MTLModel
@property (nonatomic) NSDictionary rawData;
@property (nonatomic) NSString pitayaTraceId;
@property (nonatomic) q limitCount;
@property (nonatomic) NSArray strategys;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pitayaTraceId;
- (id)strategys;
- (long long)limitCount;
- (BOOL)isValidWithError:;
- (void)setRawData:;
- (id)description;
- (void).cxx_destruct;
- (id)rawData;
+ (id)generateResultModelWithRawData:error:;
+ (id)generateResultModelWithStrategyList:error:;
+ (id)strategysJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

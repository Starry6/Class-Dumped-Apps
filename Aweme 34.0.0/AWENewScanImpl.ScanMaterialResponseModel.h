@interface AWENewScanImpl.ScanMaterialResponseModel : AWEBaseApiModel
@property (nonatomic) AWESearchAdEasterEggModel easterEggModel;
- (id)easterEggModelJSONTransformer;
- (id)easterEggModel;
- (void)setEasterEggModel:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface AWEHPCombineDataModel : AWEBaseApiModel
@property (nonatomic) NSDictionary rawData;
@property (nonatomic) AWEHPCombineFrequencyConfig freqConfig;
@property (nonatomic) NSString dataHash;
- (id)freqConfig;
- (id)freqConfigJSONTransformer;
- (void)setFreqConfig:;
- (BOOL)isValidWithError:;
- (void)setRawData:;
- (id)dataHash;
- (void).cxx_destruct;
- (id)rawData;
- (void)setDataHash:;
+ (id)modelWithRawData:error:;
+ (id)JSONKeyPathsByPropertyKey;
@end

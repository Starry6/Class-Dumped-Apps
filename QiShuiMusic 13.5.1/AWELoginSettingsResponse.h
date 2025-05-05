@interface AWELoginSettingsResponse : IESIMBaseApiModel
@property (nonatomic) NSArray dataArray;
- (void).cxx_destruct;
- (id)dataArray;
- (void)setDataArray:;
+ (id)dataArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

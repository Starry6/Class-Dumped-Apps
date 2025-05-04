@interface AWEBatManIdInfoModel : AWEBaseApiModel
@property (nonatomic) NSArray batManInfos;
- (id)batManInfos;
- (void)setBatManInfos:;
- (void).cxx_destruct;
+ (id)batManInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface AWEStartupPopupsModel : AWEBaseApiModel
@property (nonatomic) NSArray popupsInfos;
- (id)popupsInfos;
- (void)setPopupsInfos:;
- (void).cxx_destruct;
+ (id)popupsInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

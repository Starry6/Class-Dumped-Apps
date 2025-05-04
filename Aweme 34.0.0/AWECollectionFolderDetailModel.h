@interface AWECollectionFolderDetailModel : AWEBaseApiModel
@property (nonatomic) NSArray collectInfos;
- (id)collectInfos;
- (void)setCollectInfos:;
- (void).cxx_destruct;
+ (id)collectInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

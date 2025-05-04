@interface AWECodeGenAdditionalDiggModel : AWEBaseDataModel
@property (nonatomic) q cid;
@property (nonatomic) AWECodeGenIMDataSourceModel imSourceModel;
@property (nonatomic) AWECodeGenUrlModel coverOriginModel;
@property (nonatomic) NSInteger mergeCount;
- (int)mergeCount;
- (id)coverOriginModel;
- (id)imSourceModel;
- (void)setImSourceModel:;
- (void)setCoverOriginModel:;
- (void)setMergeCount:;
- (long long)cid;
- (void).cxx_destruct;
- (void)setCid:;
+ (id)JSONKeyPathsByPropertyKey;
@end

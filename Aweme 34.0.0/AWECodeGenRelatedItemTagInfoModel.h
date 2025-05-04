@interface AWECodeGenRelatedItemTagInfoModel : AWEBaseDataModel
@property (nonatomic) NSString tagName;
@property (nonatomic) NSInteger sortIndex;
@property (nonatomic) NSInteger tag;
- (int)sortIndex;
- (void)setSortIndex:;
- (int)tag;
- (void)setTag:;
- (void).cxx_destruct;
- (id)tagName;
- (void)setTagName:;
+ (id)JSONKeyPathsByPropertyKey;
@end

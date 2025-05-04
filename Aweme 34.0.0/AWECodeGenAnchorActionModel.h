@interface AWECodeGenAnchorActionModel : AWEBaseDataModel
@property (nonatomic) NSString schema;
@property (nonatomic) q schemaType;
@property (nonatomic) AWECodeGenAnchorDetailPageInfoModel detailPageInfoModel;
- (void)setSchemaType:;
- (id)detailPageInfoModel;
- (void)setDetailPageInfoModel:;
- (id)schema;
- (long long)schemaType;
- (void)setSchema:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

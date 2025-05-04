@interface AWESimpleGoodsModel : AWEGoodsBasicModel
@property (nonatomic) NSString schema;
@property (nonatomic) BOOL isLuban;
@property (nonatomic) BOOL useSchema;
- (BOOL)isLuban;
- (BOOL)useSchema;
- (BOOL)isLubanWithSchema:;
- (id)schema;
- (id)initWithDictionary:error:;
- (void)setSchema:;
- (void).cxx_destruct;
+ (id)dictionaryTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

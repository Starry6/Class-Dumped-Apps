@interface AWECodeGenEntertainmentButtonInfoModel : AWEBaseDataModel
@property (nonatomic) NSString text;
@property (nonatomic) q type;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString richText;
@property (nonatomic) q combineType;
- (void)setCombineType:;
- (id)schema;
- (void)setSchema:;
- (void)setText:;
- (id)richText;
- (id)text;
- (long long)type;
- (void)setRichText:;
- (void)setType:;
- (void).cxx_destruct;
- (long long)combineType;
+ (id)JSONKeyPathsByPropertyKey;
@end

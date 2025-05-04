@interface AWECodeGenSeriesCommentTopBarModel : AWEBaseDataModel
@property (nonatomic) NSString preTitle;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString schema;
- (id)preTitle;
- (void)setPreTitle:;
- (id)schema;
- (void)setSchema:;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

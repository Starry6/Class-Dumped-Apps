@interface AWECodeGenBannerCardCoverModel : AWEBaseDataModel
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
@property (nonatomic) NSArray urlArray;
- (id)urlArray;
- (void)setUrlArray:;
- (void)setHeight:;
- (void)setWidth:;
- (int)width;
- (void).cxx_destruct;
- (int)height;
+ (id)JSONKeyPathsByPropertyKey;
@end

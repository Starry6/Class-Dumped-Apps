@interface AWECodeGenImageInfoModel : AWEBaseDataModel
@property (nonatomic) NSInteger height;
@property (nonatomic) NSInteger width;
@property (nonatomic) AWECodeGenUrlModel labelLargeModel;
@property (nonatomic) AWECodeGenUrlModel labelThumbModel;
@property (nonatomic) NSString title;
- (id)labelThumbModel;
- (id)labelLargeModel;
- (void)setLabelLargeModel:;
- (void)setLabelThumbModel:;
- (void)setHeight:;
- (void)setWidth:;
- (int)width;
- (void).cxx_destruct;
- (id)title;
- (int)height;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end

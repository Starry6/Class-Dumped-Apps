@interface AWECodeGenSeriesBarTagInfoModel : AWEBaseDataModel
@property (nonatomic) AWECodeGenUrlModel iconForBarModel;
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
- (id)iconForBarModel;
- (void)setIconForBarModel:;
- (void)setHeight:;
- (void)setWidth:;
- (int)width;
- (void).cxx_destruct;
- (int)height;
+ (id)JSONKeyPathsByPropertyKey;
@end

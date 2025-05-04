@interface AWECodeGenIndexImageModel : AWEBaseDataModel
@property (nonatomic) NSInteger index;
@property (nonatomic) AWECodeGenSicilyUrlModel imageModel;
@property (nonatomic) AWECodeGenSicilyUrlModel mediumImageModel;
- (id)imageModel;
- (void)setImageModel:;
- (id)mediumImageModel;
- (void)setMediumImageModel:;
- (void)setIndex:;
- (int)index;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

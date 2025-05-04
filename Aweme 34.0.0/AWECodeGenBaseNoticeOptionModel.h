@interface AWECodeGenBaseNoticeOptionModel : AWEBaseDataModel
@property (nonatomic) NSString name;
@property (nonatomic) AWECodeGenUrlModel imageUrlModel;
@property (nonatomic) NSInteger group;
- (id)imageUrlModel;
- (void)setImageUrlModel:;
- (void)setGroup:;
- (int)group;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)JSONKeyPathsByPropertyKey;
@end

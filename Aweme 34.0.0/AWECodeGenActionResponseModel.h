@interface AWECodeGenActionResponseModel : AWEBaseDataModel
@property (nonatomic) NSString name;
@property (nonatomic) AWECodeGenUrlModel imageUriModel;
@property (nonatomic) AWECodeGenUrlModel lightImageUriModel;
- (id)imageUriModel;
- (void)setImageUriModel:;
- (id)lightImageUriModel;
- (void)setLightImageUriModel:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)JSONKeyPathsByPropertyKey;
@end

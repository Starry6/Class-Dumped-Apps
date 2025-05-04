@interface AWEHomePageRemoteCommonCardDataModel : AWEHomePageRemoteItemDataModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) AWEHomePageRemoteCommonImageModel imageModel;
@property (nonatomic) AWEHomePageRemoteCommonImageModel iconModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)imageModel;
- (void)setImageModel:;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setIconModel:;
- (void)setTitle:;
- (id)iconModel;
- (BOOL)isModelValid;
+ (id)iconModelJSONTransformer;
+ (id)imageModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

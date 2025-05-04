@interface AWEHomePageRemoteCommonRadioButtonDataModel : AWEHomePageRemoteItemDataModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString tabID;
@property (nonatomic) AWEHomePageRemoteCommonImageModel imageModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)imageModel;
- (void)setImageModel:;
- (void)setTabID:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)tabID;
- (BOOL)isModelValid;
+ (id)imageModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

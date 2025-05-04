@interface AWESearchAnchorUIInfoModel : MTLModel
@property (nonatomic) NSArray textsModel;
@property (nonatomic) NSArray iconsModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)textsModel;
- (void)setTextsModel:;
- (id)iconsModel;
- (void)setIconsModel:;
- (void).cxx_destruct;
+ (id)textsModelJSONTransformer;
+ (id)iconsModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

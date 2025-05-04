@interface AWESearchScanCameraPopEntranceStyleModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSArray itemsArr;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)itemsArr;
- (void)setItemsArr:;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)itemsArrJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

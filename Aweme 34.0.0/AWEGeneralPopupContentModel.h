@interface AWEGeneralPopupContentModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString context;
@property (nonatomic) AWEURLModel image;
@property (nonatomic) NSArray buttons;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)image;
- (id)buttons;
- (void).cxx_destruct;
- (id)title;
- (id)context;
+ (id)imageJSONTransformer;
+ (id)buttonsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

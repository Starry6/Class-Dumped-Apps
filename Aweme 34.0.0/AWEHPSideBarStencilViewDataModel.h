@interface AWEHPSideBarStencilViewDataModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString schema;
@property (nonatomic) AWELeftSideBarListCellLeftIconModel leftIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLeftIcon:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)leftIcon;
+ (id)leftIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

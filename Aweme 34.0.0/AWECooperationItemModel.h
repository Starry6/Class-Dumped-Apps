@interface AWECooperationItemModel : MTLModel
@property (nonatomic) BOOL isShow;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (BOOL)isShow;
- (void)setIsShow:;
- (BOOL)isStarmap;
- (BOOL)isECommerce;
- (BOOL)isLifeService;
- (id)schema;
- (void)setSchema:;
- (id)extra;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end

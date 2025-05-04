@interface AWEECommerceLabel : AWEBaseApiModel
@property (nonatomic) q type;
@property (nonatomic) AWEURLModel icon;
@property (nonatomic) NSString headerText;
@property (nonatomic) NSString contentText;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString extra;
- (void)setExtra:;
- (id)schema;
- (void)setSchema:;
- (id)icon;
- (id)extra;
- (long long)type;
- (void)setType:;
- (id)headerText;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setHeaderText:;
- (void)setContentText:;
- (id)contentText;
+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

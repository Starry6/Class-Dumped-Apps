@interface AWETeenModeAlertContentModel : AWEBaseApiModel
@property (nonatomic) NSString text;
@property (nonatomic) AWETeenModeAlertImageModel image;
@property (nonatomic) NSArray links;
- (id)initWithText:andImageURLStr:;
- (id)image;
- (id)links;
- (void)setImage:;
- (void)setText:;
- (id)text;
- (id)initWithText:;
- (void).cxx_destruct;
- (void)setLinks:;
+ (id)imageJSONTransformer;
+ (id)linksJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

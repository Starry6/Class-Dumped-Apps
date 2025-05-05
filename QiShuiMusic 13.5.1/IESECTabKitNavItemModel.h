@interface IESECTabKitNavItemModel : MTLModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString text;
@property (nonatomic) NSString clickURL;
@property (nonatomic) IESECURLModel image;
@property (nonatomic) IESECTabKitBizConfigModel bizConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bizConfig;
- (id)clickURL;
- (void)setBizConfig:;
- (void)setClickURL:;
- (void)setName:;
- (void)setText:;
- (void)setImage:;
- (void).cxx_destruct;
- (id)name;
- (id)text;
- (id)image;
- (id)toJSON;
+ (id)JSONKeyPathsByPropertyKey;
@end

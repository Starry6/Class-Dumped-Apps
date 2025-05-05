@interface IESECGoodsResourceModel : MTLModel
@property (nonatomic) NSString url;
@property (nonatomic) IESECURLModel icon;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString descColor;
@property (nonatomic) IESECURLModel bgPic;
@property (nonatomic) Q location;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bgPic;
- (id)descColor;
- (void)setBgPic:;
- (void)setDescColor:;
- (id)url;
- (id)desc;
- (id)icon;
- (void)setDesc:;
- (void)setUrl:;
- (unsigned long long)location;
- (void)setLocation:;
- (void)setIcon:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

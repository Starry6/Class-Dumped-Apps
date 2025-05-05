@interface IESECGoodsCertificationItemsModel : MTLModel
@property (nonatomic) BOOL useFlag;
@property (nonatomic) IESECURLModel icon;
@property (nonatomic) NSString content;
@property (nonatomic) NSString contentColor;
@property (nonatomic) double leftDistance;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)useFlag;
- (void)setUseFlag:;
- (id)content;
- (void)setContent:;
- (void)setContentColor:;
- (id)icon;
- (id)contentColor;
- (void)setIcon:;
- (void).cxx_destruct;
- (double)leftDistance;
- (void)setLeftDistance:;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface IESECGoodsFeedBackItemModel : MTLModel
@property (nonatomic) NSString desc;
@property (nonatomic) IESECURLModel icon;
@property (nonatomic) NSString tagName;
@property (nonatomic) NSString tagCode;
@property (nonatomic) NSString btm;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)btm;
- (void)setBtm:;
- (id)tagCode;
- (id)logExtra;
- (void)setLogExtra:;
- (void)setTagCode:;
- (id)desc;
- (id)icon;
- (void)setDesc:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)tagName;
- (void)setTagName:;
+ (id)JSONKeyPathsByPropertyKey;
@end

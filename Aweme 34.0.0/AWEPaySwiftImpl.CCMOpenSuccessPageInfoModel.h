@interface AWEPaySwiftImpl.CCMOpenSuccessPageInfoModel : MTLModel
@property (nonatomic) NSString type;
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) _TtC15AWEPaySwiftImpl34CCMOpenSuccessPageServiceInfoModel serviceDesc;
@property (nonatomic) _TtC15AWEPaySwiftImpl34CCMOpenSuccessPagePayTypeInfoModel payTypeDesc;
- (id)serviceDesc;
- (void)setServiceDesc:;
- (id)payTypeDesc;
- (void)setPayTypeDesc:;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setDesc:;
- (id)type;
- (id)desc;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface CJPayResultPayInfo : JSONModel
@property (nonatomic) NSString typeMark;
@property (nonatomic) NSString amount;
@property (nonatomic) NSString payType;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString halfScreenDesc;
@property (nonatomic) NSString name;
@property (nonatomic) NSString colorType;
@property (nonatomic) NSString payTypeShowName;
- (id)payType;
- (id)payTypeShowName;
- (id)halfScreenDesc;
- (void)setHalfScreenDesc:;
- (void)setPayType:;
- (void)setPayTypeShowName:;
- (void)setTypeMark:;
- (id)typeMark;
- (void)setName:;
- (id)desc;
- (void)setDesc:;
- (void).cxx_destruct;
- (id)name;
- (id)amount;
- (void)setAmount:;
- (id)colorType;
- (void)setColorType:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end

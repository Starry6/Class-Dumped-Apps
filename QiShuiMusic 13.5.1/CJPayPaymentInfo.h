@interface CJPayPaymentInfo : JSONModel
@property (nonatomic) NSString typeMark;
@property (nonatomic) NSString name;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString colortype;
@property (nonatomic) NSString icon;
- (id)colortype;
- (void)setColortype:;
- (void)setTypeMark:;
- (id)typeMark;
- (void)setName:;
- (id)desc;
- (id)icon;
- (void)setDesc:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)name;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end

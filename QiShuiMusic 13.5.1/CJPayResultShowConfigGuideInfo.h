@interface CJPayResultShowConfigGuideInfo : JSONModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString color;
@property (nonatomic) NSString type;
- (BOOL)isShowText;
- (void)setColor:;
- (void)setText:;
- (void)setType:;
- (id)color;
- (id)type;
- (void).cxx_destruct;
- (id)text;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end

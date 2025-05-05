@interface CJBackBlockActionModel : JSONModel
@property (nonatomic) NSString title;
@property (nonatomic) q action;
@property (nonatomic) NSString fontWeight;
- (void)setFontWeight:;
- (long long)action;
- (void)setTitle:;
- (void)setAction:;
- (id)fontWeight;
- (id)title;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end

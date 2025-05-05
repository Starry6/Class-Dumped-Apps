@interface CJPayDataSecurity : JSONModel
@property (nonatomic) BOOL enableDataSecurity;
@property (nonatomic) BOOL blurType;
- (BOOL)enableDataSecurity;
- (void)setEnableDataSecurity:;
- (BOOL)blurType;
- (void)setBlurType:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end

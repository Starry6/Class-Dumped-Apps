@interface CJPayFalconHtmlConfigModel : JSONModel
@property (nonatomic) NSString path;
@property (nonatomic) NSString file;
- (id)path;
- (void)setPath:;
- (void)setFile:;
- (id)file;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end

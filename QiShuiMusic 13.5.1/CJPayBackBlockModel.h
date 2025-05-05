@interface CJPayBackBlockModel : JSONModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString context;
@property (nonatomic) q policy;
@property (nonatomic) CJBackBlockActionModel confirmModel;
@property (nonatomic) CJBackBlockActionModel cancelModel;
- (void)setCancelModel:;
- (id)cancelModel;
- (id)confirmModel;
- (void)setConfirmModel:;
- (void)setPolicy:;
- (id)context;
- (long long)policy;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (void)setContext:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end

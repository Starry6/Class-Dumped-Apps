@interface CJPayECCreateOrderModel : JSONModel
@property (nonatomic) NSInteger st;
@property (nonatomic) NSString msg;
@property (nonatomic) NSDictionary data;
- (void)setSt:;
- (id)data;
- (void).cxx_destruct;
- (void)setData:;
- (int)st;
- (id)msg;
- (void)setMsg:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end

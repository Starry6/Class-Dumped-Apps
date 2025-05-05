@interface CJPayForceHttpsModel : JSONModel
@property (nonatomic) BOOL forceHttpsEnable;
@property (nonatomic) NSArray allowHttpList;
- (id)allowHttpList;
- (BOOL)forceHttpsEnable;
- (void)setAllowHttpList:;
- (void)setForceHttpsEnable:;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end

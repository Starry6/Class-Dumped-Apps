@interface CJPayPayInfoDesc : JSONModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString showNum;
- (id)iconUrl;
- (id)showNum;
- (void)setIconUrl:;
- (void)setShowNum:;
- (void)setName:;
- (id)desc;
- (void)setDesc:;
- (void).cxx_destruct;
- (id)name;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end

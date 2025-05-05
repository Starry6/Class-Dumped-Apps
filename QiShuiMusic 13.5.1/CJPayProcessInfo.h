@interface CJPayProcessInfo : JSONModel
@property (nonatomic) NSString createTime;
@property (nonatomic) NSString processId;
@property (nonatomic) NSString processInfo;
- (id)processId;
- (id)processInfo;
- (void)setProcessInfo:;
- (id)createTime;
- (void)setProcessId:;
- (id)dictionaryValue;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setCreateTime:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end

@interface TencentBaseMessageObj : NSObject
@property (nonatomic) q nVersion;
@property (nonatomic) NSString sName;
@property (nonatomic) NSDictionary dictExpandInfo;
- (BOOL)isVaild;
- (id)dictExpandInfo;
- (long long)nVersion;
- (id)sName;
- (void)setDictExpandInfo:;
- (void)setNVersion:;
- (void)setSName:;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithVersion:;
+ (BOOL)supportsSecureCoding;
@end

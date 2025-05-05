@interface CWFSensingResult : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray data;
- (id)data;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setData:;
- (id)JSONCompatibleKeyValueMap;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToSensingResult:;
+ (BOOL)supportsSecureCoding;
@end

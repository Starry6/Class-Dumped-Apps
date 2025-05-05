@interface RTCSecureHierarchyToken : NSObject
@property (nonatomic) NSString token;
@property (nonatomic) NSInteger level;
- (void)setLevel:;
- (void)dealloc;
- (id)token;
- (int)level;
- (id)initWithCoder:;
- (void)setToken:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)initWithToken:level:;
+ (BOOL)supportsSecureCoding;
@end

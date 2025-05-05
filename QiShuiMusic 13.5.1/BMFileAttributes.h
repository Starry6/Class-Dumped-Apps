@interface BMFileAttributes : NSObject
@property (nonatomic) Q mode;
@property (nonatomic) Q protectionClass;
@property (nonatomic) NSString path;
@property (nonatomic) NSString filename;
- (id)path;
- (id)filename;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (unsigned long long)protectionClass;
- (id)initWithPath:mode:protectionClass:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned long long)mode;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end

@interface AFApplicationInfo : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSInteger pid;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (int)pid;
- (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (void)setPid:;
+ (BOOL)supportsSecureCoding;
@end

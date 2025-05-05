@interface EMReadLater : NSObject
@property (nonatomic) NSDate date;
@property (nonatomic) BOOL isActive;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithDate:;
- (id)date;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (BOOL)isActive;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end

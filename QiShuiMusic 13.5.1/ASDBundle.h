@interface ASDBundle : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSURL URL;
- (id)identifier;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)bundleWithIdentifier:;
@end

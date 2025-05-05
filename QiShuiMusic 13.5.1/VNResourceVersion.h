@interface VNResourceVersion : NSObject
@property (nonatomic) I major;
@property (nonatomic) I minor;
@property (nonatomic) I micro;
@property (nonatomic) BOOL valid;
@property (nonatomic) NSString stringRepresentation;
- (id)stringRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)compare:;
- (BOOL)isValid;
- (id)initWithMajor:minor:;
- (id)description;
- (unsigned int)major;
- (unsigned int)minor;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithMajor:;
- (id)initWithMajor:minor:micro:;
- (BOOL)isEqualToResourceVersion:;
- (unsigned int)micro;
+ (BOOL)supportsSecureCoding;
+ (id)versionForStringRepresentation:;
+ (id)invalidVersion;
@end

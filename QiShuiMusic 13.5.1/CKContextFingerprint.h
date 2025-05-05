@interface CKContextFingerprint : NSObject
@property (nonatomic) q type;
- (void)setType:;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (long long)type;
+ (BOOL)supportsSecureCoding;
+ (id)parse:;
@end

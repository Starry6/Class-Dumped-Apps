@interface ASCredentialServiceIdentifier : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) q type;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (id)initWithIdentifier:type:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end

@interface MEAddressAnnotation : NSObject
@property (nonatomic) q iconType;
@property (nonatomic) NSString localizedDescription;
@property (nonatomic) NSString originatorExtensionDisplayName;
- (id)localizedDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (long long)iconType;
- (id)initWithEmailAddressTokenIconType:localizedDescription:;
- (id)_iconTypeDescription;
- (id)originatorExtensionDisplayName;
- (void)setOriginatorExtensionDisplayName:;
+ (BOOL)supportsSecureCoding;
+ (id)errorWithLocalizedDescription:;
+ (id)warningWithLocalizedDescription:;
+ (id)successWithLocalizedDescription:;
@end

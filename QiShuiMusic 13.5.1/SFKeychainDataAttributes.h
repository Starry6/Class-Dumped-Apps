@interface SFKeychainDataAttributes : NSObject
@property (nonatomic) NSString localizedLabel;
@property (nonatomic) NSString localizedDescription;
@property (nonatomic) NSString persistentIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)localizedDescription;
- (id)initWithCoder:;
- (id)persistentIdentifier;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setLocalizedLabel:;
- (void)setLocalizedDescription:;
- (id)localizedLabel;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end

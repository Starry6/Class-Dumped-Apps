@interface SFSymmetricKeyAttributes : NSObject
@property (nonatomic) _SFKeySpecifier keySpecifier;
@property (nonatomic) NSString keyDomain;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString localizedLabel;
@property (nonatomic) NSString localizedDescription;
@property (nonatomic) NSString persistentIdentifier;
- (id)keyDomain;
- (id)localizedDescription;
- (id)initWithSpecifier:domain:;
- (id)persistentIdentifier;
- (void).cxx_destruct;
- (void)setLocalizedLabel:;
- (void)setLocalizedDescription:;
- (id)initWithSpecifier:;
- (id)keySpecifier;
- (void)setKeySpecifier:;
- (id)localizedLabel;
- (id)copyWithZone:;
@end

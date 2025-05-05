@interface LNDynamicOptionsResult : NSObject
@property (nonatomic) NSArray sections;
@property (nonatomic) BOOL usesIndexedCollation;
@property (nonatomic) LNStaticDeferredLocalizedString promptLabel;
- (id)sections;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)promptLabel;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (BOOL)usesIndexedCollation;
- (id)initWithSections:usesIndexedCollation:promptLabel:;
+ (BOOL)supportsSecureCoding;
@end

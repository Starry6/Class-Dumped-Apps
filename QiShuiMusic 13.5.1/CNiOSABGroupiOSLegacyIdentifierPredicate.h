@interface CNiOSABGroupiOSLegacyIdentifierPredicate : CNPredicate
@property (nonatomic) NSInteger iOSLegacyIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (int)iOSLegacyIdentifier;
- (id)cn_copyGroupsInAddressBook:error:;
- (id)initWithiOSLegacyIdentifier:;
+ (BOOL)supportsSecureCoding;
@end

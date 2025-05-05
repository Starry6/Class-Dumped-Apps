@interface CNiOSABContaineriOSLegacyIdentifierPredicate : CNPredicate
@property (nonatomic) NSInteger iOSLegacyIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)initWithPredicate:;
- (int)iOSLegacyIdentifier;
- (id)cn_copyContainersInAddressBook:error:;
- (BOOL)includesDisabledContainers;
- (id)initWithiOSLegacyIdentifier:;
+ (BOOL)supportsSecureCoding;
@end

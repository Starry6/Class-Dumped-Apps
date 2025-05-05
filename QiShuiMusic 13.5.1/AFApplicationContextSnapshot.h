@interface AFApplicationContextSnapshot : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray applicationContexts;
- (id)initWithSerializedBackingStore:;
- (id)init;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)serializedBackingStore;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithApplicationContexts:;
- (id)applicationContexts;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end

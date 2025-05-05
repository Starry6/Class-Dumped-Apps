@interface AFHomeInfo : NSObject
@property (nonatomic) NSUUID homeIdentifier;
@property (nonatomic) BOOL activityNotificationsEnabledForPersonalRequests;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)buildDictionaryRepresentation;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)homeIdentifier;
- (id)initWithHomeIdentifier:activityNotificationsEnabledForPersonalRequests:;
- (BOOL)activityNotificationsEnabledForPersonalRequests;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end

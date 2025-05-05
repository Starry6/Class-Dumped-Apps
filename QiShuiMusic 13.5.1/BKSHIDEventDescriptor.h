@interface BKSHIDEventDescriptor : NSObject
@property (nonatomic) I hidEventType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)descriptorByAddingSenderIDToMatchCriteria:;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (BOOL)describes:;
- (unsigned int)hidEventType;
- (id)initWithEventType:;
- (void)encodeWithCoder:;
- (id)succinctDescription;
- (id)description;
- (BOOL)matchesHIDEvent:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)descriptorWithEventType:;
+ (id)descriptorForHIDEvent:;
@end

@interface BKSHIDEventUsagePairDescriptor : BKSHIDEventDescriptor
@property (nonatomic) I page;
@property (nonatomic) I usage;
- (unsigned int)page;
- (unsigned int)usage;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (BOOL)describes:;
- (void)encodeWithCoder:;
- (BOOL)_page:usage:matchesHIDEvent:;
- (BOOL)matchesHIDEvent:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)_initWithPage:usage:eventType:;
+ (BOOL)supportsSecureCoding;
+ (id)descriptorForHIDEventType:page:usage:;
@end

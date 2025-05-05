@interface BKSHIDEventSenderSpecificDescriptor : BKSHIDEventDescriptor
@property (nonatomic) BKSHIDEventDescriptor sourceDescriptor;
@property (nonatomic) Q senderID;
- (unsigned long long)senderID;
- (id)descriptorByAddingSenderIDToMatchCriteria:;
- (void)setSourceDescriptor:;
- (id)sourceDescriptor;
- (id)initWithCoder:;
- (BOOL)describes:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)matchesHIDEvent:;
- (id)initWithDescriptor:senderID:;
+ (BOOL)supportsSecureCoding;
@end

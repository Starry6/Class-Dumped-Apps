@interface BKSMutableHIDEventSenderDescriptor : BKSHIDEventSenderDescriptor
@property (nonatomic) q hardwareType;
@property (nonatomic) BKSHIDEventDisplay associatedDisplay;
@property (nonatomic) BOOL authenticated;
@property (nonatomic) Q senderID;
- (void)setSenderID:;
- (id)init;
- (void)setAuthenticated:;
- (void)setPrimaryPage:primaryUsage:;
- (void)setAssociatedDisplay:;
- (void)setHardwareType:;
+ (id)new;
@end

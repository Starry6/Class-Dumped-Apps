@interface BKSMutableHIDEventKeyCommandsDispatchingPredicate : BKSHIDEventKeyCommandsDispatchingPredicate
@property (nonatomic) NSSet senderDescriptors;
@property (nonatomic) NSSet displays;
- (id)init;
- (void)setSenderDescriptors:;
- (void)setDisplays:;
- (id)copyWithZone:;
+ (id)new;
@end

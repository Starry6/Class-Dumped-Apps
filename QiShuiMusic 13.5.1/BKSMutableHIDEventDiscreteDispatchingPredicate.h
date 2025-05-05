@interface BKSMutableHIDEventDiscreteDispatchingPredicate : BKSHIDEventDiscreteDispatchingPredicate
@property (nonatomic) NSSet senderDescriptors;
@property (nonatomic) NSSet descriptors;
@property (nonatomic) NSSet displays;
- (id)init;
- (void)setSenderDescriptors:;
- (void)setDisplays:;
- (void)setDescriptors:;
- (id)copyWithZone:;
+ (id)new;
+ (id)defaultSystemPredicate;
+ (id)defaultFocusPredicate;
@end

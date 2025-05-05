@interface BKSHIDEventKeyboardAttributes : BKSHIDEventBaseAttributes
@property (nonatomic) I GSModifierState;
- (void)setGSModifierState:;
- (unsigned int)GSModifierState;
- (void)appendDescriptionToFormatter:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)protobufSchema;
@end

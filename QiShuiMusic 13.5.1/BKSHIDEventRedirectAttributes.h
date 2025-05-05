@interface BKSHIDEventRedirectAttributes : BKSHIDEventBaseAttributes
@property (nonatomic) NSInteger pid;
- (int)pid;
- (void)appendDescriptionToFormatter:;
- (void)setPid:;
- (id)copyWithZone:;
+ (id)protobufSchema;
@end

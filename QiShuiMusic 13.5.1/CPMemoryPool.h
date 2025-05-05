@interface CPMemoryPool : NSObject
@property (nonatomic) Q slotLength;
- (void)dealloc;
- (id)initWithLabel:slotLength:;
- (unsigned long long)slotLength;
- (id)nextSlotWithBytes:length:;
@end

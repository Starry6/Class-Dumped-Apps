@interface CPMemoryPoolFile : NSObject
- (void)dealloc;
- (void)returnSlot:;
- (id)initWithLabel:slotCount:slotLength:;
- (id)nextSlotWithBytes:length:;
@end

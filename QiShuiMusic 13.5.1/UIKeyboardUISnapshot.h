@interface UIKeyboardUISnapshot : NSObject
@property (nonatomic) I slotID;
@property (nonatomic) {CGSize=dd} size;
- (unsigned int)slotID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setSlotID:;
- (id)description;
- (void)setSize:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)size;
+ (BOOL)supportsSecureCoding;
@end

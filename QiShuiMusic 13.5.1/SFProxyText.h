@interface SFProxyText : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) I slotIdentifier;
@property (nonatomic) double slotTextHeight;
- (id)initWithText:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)text;
- (BOOL)isEqual:;
- (unsigned int)slotIdentifier;
- (id)initWithSlotIdentifier:;
- (id)initWithSlotIdentifier:slotTextHeight:;
- (double)slotTextHeight;
+ (BOOL)supportsSecureCoding;
@end

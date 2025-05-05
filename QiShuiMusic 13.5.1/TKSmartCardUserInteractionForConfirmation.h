@interface TKSmartCardUserInteractionForConfirmation : TKSmartCardUserInteraction
@property (nonatomic) TKSmartCardSlot slot;
@property (nonatomic) BOOL result;
- (id)slot;
- (BOOL)result;
- (id)initWithCoder:;
- (void)setSlot:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setResult:;
- (void)runWithReply:;
+ (BOOL)supportsSecureCoding;
@end

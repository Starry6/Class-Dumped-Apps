@interface TKSmartCardUserInteractionForStringEntry : TKSmartCardUserInteraction
@property (nonatomic) TKSmartCardSlot slot;
@property (nonatomic) NSString result;
- (id)slot;
- (id)result;
- (id)initWithCoder:;
- (void)setSlot:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setResult:;
- (void)runWithReply:;
+ (BOOL)supportsSecureCoding;
@end

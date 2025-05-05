@interface TKSmartCardUserInteractionForSecurePINVerification : TKSmartCardUserInteractionForPINOperation
@property (nonatomic) TKSmartCardSlot slot;
@property (nonatomic) TKSmartCardPINFormat PINFormat;
@property (nonatomic) NSData APDU;
@property (nonatomic) q PINByteOffset;
- (id)slot;
- (id)initWithCoder:;
- (void)setSlot:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)runWithReply:;
- (void)setSlot:PINFormat:APDU:PINByteOffset:;
- (id)PINFormat;
- (void)setPINFormat:;
- (id)APDU;
- (void)setAPDU:;
- (long long)PINByteOffset;
- (void)setPINByteOffset:;
+ (BOOL)supportsSecureCoding;
@end

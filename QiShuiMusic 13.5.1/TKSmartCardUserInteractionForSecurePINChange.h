@interface TKSmartCardUserInteractionForSecurePINChange : TKSmartCardUserInteractionForPINOperation
@property (nonatomic) TKSmartCardSlot slot;
@property (nonatomic) TKSmartCardPINFormat PINFormat;
@property (nonatomic) NSData APDU;
@property (nonatomic) q currentPINByteOffset;
@property (nonatomic) q newPINByteOffset;
@property (nonatomic) Q PINConfirmation;
- (id)slot;
- (id)init;
- (id)initWithCoder:;
- (void)setSlot:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)runWithReply:;
- (id)PINFormat;
- (void)setPINFormat:;
- (id)APDU;
- (void)setAPDU:;
- (void)setSlot:PINFormat:APDU:currentPINByteOffset:newPINByteOffset:;
- (unsigned long long)PINConfirmation;
- (void)setPINConfirmation:;
- (long long)currentPINByteOffset;
- (void)setCurrentPINByteOffset:;
- (long long)newPINByteOffset;
- (void)setNewPINByteOffset:;
+ (BOOL)supportsSecureCoding;
@end

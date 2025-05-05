@interface TKTokenSmartCardPINAuthOperation : TKTokenAuthOperation
@property (nonatomic) NSString localizedPINLabel;
@property (nonatomic) TKSmartCardPINFormat PINFormat;
@property (nonatomic) NSData APDUTemplate;
@property (nonatomic) q PINByteOffset;
@property (nonatomic) TKSmartCard smartCard;
@property (nonatomic) NSString PIN;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)finishWithError:;
- (void)setPIN:;
- (id)PINFormat;
- (void)setPINFormat:;
- (long long)PINByteOffset;
- (void)setPINByteOffset:;
- (id)APDUTemplate;
- (id)PIN;
- (id)localizedPINLabel;
- (void)importOperation:;
- (Class)baseClassForUI;
- (void)setAPDUTemplate:;
- (id)smartCard;
- (void)setSmartCard:;
- (void)setLocalizedPINLabel:;
+ (BOOL)supportsSecureCoding;
@end

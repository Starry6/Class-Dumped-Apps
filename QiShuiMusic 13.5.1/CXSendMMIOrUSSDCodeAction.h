@interface CXSendMMIOrUSSDCodeAction : CXAction
@property (nonatomic) NSString code;
@property (nonatomic) q ttyType;
@property (nonatomic) NSUUID senderIdentityUUID;
- (id)code;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setCode:;
- (id)customDescription;
- (long long)ttyType;
- (void)setTtyType:;
- (id)sanitizedCopyWithZone:;
- (id)senderIdentityUUID;
- (void)updateCopy:withZone:;
- (void)setSenderIdentityUUID:;
+ (BOOL)supportsSecureCoding;
@end

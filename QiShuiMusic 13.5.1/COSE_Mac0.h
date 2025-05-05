@interface COSE_Mac0 : COSE
@property (nonatomic) NSData mac;
- (id)mac;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCBOR:;
- (id)generateMessageForMACWithApplicationProtectedAttributes:;
- (id)initWithProtectedHeaders:unprotectedHeaders:payload:tag:;
@end

@interface IDSCTPNRResponseData : NSObject
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) NSString phoneBookNumber;
@property (nonatomic) NSData signature;
@property (nonatomic) BOOL success;
@property (nonatomic) NSString status;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStatus:;
- (void)setSignature:;
- (id)signature;
- (id)phoneNumber;
- (void)setPhoneNumber:;
- (BOOL)success;
- (void)setSuccess:;
- (void).cxx_destruct;
- (id)status;
- (id)phoneBookNumber;
- (id)initWithCTResponse:phoneBookNumber:;
- (void)setPhoneBookNumber:;
@end

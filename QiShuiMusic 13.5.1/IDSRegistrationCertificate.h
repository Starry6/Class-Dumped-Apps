@interface IDSRegistrationCertificate : NSObject
@property (nonatomic) IDSServerCertificate backingCertificate;
@property (nonatomic) NSData dataRepresentation;
- (id)initWithDataRepresentation:;
- (void).cxx_destruct;
- (id)description;
- (id)dataRepresentation;
- (id)initWithBackingCertificate:;
- (id)backingCertificate;
@end

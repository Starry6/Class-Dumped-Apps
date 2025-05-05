@interface IDSServerCertificate : NSObject
@property (nonatomic) NSData dataRepresentation;
- (id)initWithDataRepresentation:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)dataRepresentation;
- (id)copyWithZone:;
@end

@interface IDSServerMessagingIncomingContext : NSObject
@property (nonatomic) BOOL fromServerStorage;
@property (nonatomic) IDSCertifiedDeliveryContext certifiedDeliveryContext;
@property (nonatomic) NSString identifier;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (id)initWithFromServerStorage:certifiedDeliveryContext:identifier:;
- (BOOL)fromServerStorage;
- (void)setFromServerStorage:;
- (id)certifiedDeliveryContext;
- (void)setCertifiedDeliveryContext:;
+ (BOOL)supportsSecureCoding;
@end

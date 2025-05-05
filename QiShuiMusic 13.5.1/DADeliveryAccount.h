@interface DADeliveryAccount : DeliveryAccount
- (void).cxx_destruct;
- (id)mailAccountIfAvailable;
- (id)newDeliveryWithMessage:;
- (id)newDeliveryWithHeaders:mixedContent:textPartsAreHTML:;
- (id)newDeliveryWithHeaders:HTML:plainTextAlternative:other:;
- (id)initWithDAMailAccount:;
- (Class)deliveryClass;
+ (id)accountTypeIdentifier;
@end

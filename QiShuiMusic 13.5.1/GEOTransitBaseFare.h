@interface GEOTransitBaseFare : PBCodable
@property (nonatomic) NSDecimalNumber value;
@property (nonatomic) NSString currencyCode;
@property (nonatomic) q type;
@property (nonatomic) NSArray supportedICCardProviders;
@property (nonatomic) Q supportedPaymentMethodIndexsCount;
@property (nonatomic) ^I supportedPaymentMethodIndexs;
@property (nonatomic) BOOL cashOnly;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL hasPrice;
@property (nonatomic) GEOTransitPrice price;
@property (nonatomic) BOOL hasPaymentType;
@property (nonatomic) NSInteger paymentType;
@property (nonatomic) BOOL hasNumberOfLegs;
@property (nonatomic) I numberOfLegs;
@property (nonatomic) NSMutableArray supportedPaymentMethods;
@property (nonatomic) BOOL hasCashOnly;
@property (nonatomic) BOOL cashOnly;
@property (nonatomic) Q supportedPaymentMethodIndexsCount;
@property (nonatomic) ^I supportedPaymentMethodIndexs;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)init;
- (int)paymentType;
- (void)dealloc;
- (BOOL)hasPaymentType;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (id)currencyCode;
- (void)copyTo:;
- (void)mergeFrom:;
- (int)StringAsPaymentType:;
- (long long)type;
- (void)setHasPaymentType:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)value;
- (id)paymentTypeAsString:;
- (id)dictionaryRepresentation;
- (id)price;
- (void)setPaymentType:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasPrice;
- (void)setPrice:;
- (unsigned int)numberOfLegs;
- (void)setNumberOfLegs:;
- (void)setHasNumberOfLegs:;
- (BOOL)hasNumberOfLegs;
- (id)supportedPaymentMethods;
- (void)setSupportedPaymentMethods:;
- (void)clearSupportedPaymentMethods;
- (void)addSupportedPaymentMethod:;
- (unsigned long long)supportedPaymentMethodsCount;
- (id)supportedPaymentMethodAtIndex:;
- (BOOL)cashOnly;
- (void)setCashOnly:;
- (void)setHasCashOnly:;
- (BOOL)hasCashOnly;
- (unsigned long long)supportedPaymentMethodIndexsCount;
- (id)supportedPaymentMethodIndexs;
- (void)clearSupportedPaymentMethodIndexs;
- (void)addSupportedPaymentMethodIndex:;
- (unsigned int)supportedPaymentMethodIndexAtIndex:;
- (void)setSupportedPaymentMethodIndexs:count:;
- (id)supportedICCardProviders;
+ (BOOL)isValid:;
+ (Class)supportedPaymentMethodType;
@end

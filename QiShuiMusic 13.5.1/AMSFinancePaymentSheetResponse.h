@interface AMSFinancePaymentSheetResponse : NSObject
@property (nonatomic) AMSFinanceAuthenticateResponse authenticateResponse;
@property (nonatomic) NSDictionary metricsDictionary;
@property (nonatomic) AMSPaymentSheetRequest paymentSheetRequest;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)metricsDictionary;
- (void).cxx_destruct;
- (id)performWithTaskInfo:;
- (id)_enrichedMetricsDictionaryWithFinanceDictionary:;
- (id)initWithResponseDictionary:confirmationOnly:delegateAuthenticationRequired:biometricSignatureRequired:taskInfo:;
- (id)authenticateResponse;
- (id)paymentSheetRequest;
+ (id)_createMerchantSessionFromDictionary:;
+ (id)_attributedListDictionaryForValues:account:;
+ (id)_flexListDictionaryForValues:styles:account:shouldUppercaseText:designVersion:;
+ (long long)_confirmationTitleForString:;
+ (long long)_payeeForRequestorValue:;
+ (long long)_payeeInferredFromEnumeratedTitle:;
+ (long long)_salableIconForString:;
+ (id)_styleDictionaryWithName:styles:;
+ (id)_attributedStringForAttributedArray:account:;
+ (id)_attributedStringForAttributedDictionary:account:;
+ (id)_attributedStringForSalableInfoStringArray:account:shouldUppercase:;
+ (id)_attributedStringForStringArray:useGrey:account:shouldUppercase:;
+ (id)_attributedStringWithString:styles:;
+ (id)_greyAttributedStringForAttributedString:range:;
+ (id)_createRequestFromDictionary:confirmationOnly:delegateAuthenticationRequired:biometricSignatureRequired:authenticateResponse:taskInfo:;
@end

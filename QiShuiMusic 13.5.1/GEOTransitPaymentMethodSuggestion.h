@interface GEOTransitPaymentMethodSuggestion : NSObject
@property (nonatomic) Q marketMUID;
@property (nonatomic) NSArray paymentMethodIndices;
@property (nonatomic) GEOFormattedString tipTitle;
@property (nonatomic) GEOFormattedString tipSubtitle;
@property (nonatomic) NSArray educationalScreenAssets;
@property (nonatomic) NSArray educationalScreenPaymentBody;
@property (nonatomic) GEOFormattedString educationalScreenTitle;
@property (nonatomic) NSInteger purpose;
@property (nonatomic) NSInteger type;
- (int)purpose;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)educationalScreenAssets;
- (id)initWithSuggestionData:;
- (unsigned long long)marketMUID;
- (id)paymentMethodIndices;
- (id)tipTitle;
- (id)tipSubtitle;
- (id)educationalScreenPaymentBody;
- (id)educationalScreenTitle;
@end

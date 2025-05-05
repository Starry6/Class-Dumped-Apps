@interface GEORatingSummary : NSObject
@property (nonatomic) NSString vendorName;
@property (nonatomic) BOOL appleRating;
@property (nonatomic) float normalizedUserRatingScore;
@property (nonatomic) float sampleSizeUsedForScore;
- (id)vendorName;
- (void).cxx_destruct;
- (float)normalizedUserRatingScore;
- (id)initWithRatingData:attributionMap:;
- (BOOL)isAppleRating;
- (float)_normalizedFirstPartyUserRatingScore;
- (float)_normalizedThirdPartyUserRatingScore;
- (float)sampleSizeUsedForScore;
@end

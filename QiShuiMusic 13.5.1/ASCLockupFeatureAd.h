@interface ASCLockupFeatureAd : NSObject
@property (nonatomic) BOOL isEditorsChoice;
@property (nonatomic) float productRating;
@property (nonatomic) NSString productRatingBadge;
@property (nonatomic) NSString productDescription;
@property (nonatomic) ASCScreenshots screenshots;
@property (nonatomic) ASCTrailers trailers;
@property (nonatomic) NSString developerName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)developerName;
- (id)screenshots;
- (id)trailers;
- (id)initWithEditorsChoice:productRating:productRatingBadge:productDescription:screenshots:trailers:developerName:;
- (BOOL)isEditorsChoice;
- (float)productRating;
- (id)productRatingBadge;
- (id)productDescription;
+ (BOOL)supportsSecureCoding;
@end

@interface MLContentRating : NSObject
@property (nonatomic) NSString ratingDescription;
@property (nonatomic) NSString ratingLabel;
@property (nonatomic) NSNumber ratingRank;
@property (nonatomic) NSString ratingSystem;
- (void)_setValue:forKey:;
- (id)init;
- (id)ratingLabel;
- (id)ratingRank;
- (void).cxx_destruct;
- (id)initWithStringRepresentation:;
- (id)copyWithZone:;
- (void)setRatingDescription:;
- (id)ratingDescription;
- (void)setRatingLabel:;
- (void)setRatingRank:;
- (id)ratingSystem;
- (void)setRatingSystem:;
- (void)_setValueCopy:forKey:;
- (id)initWithContentRatingDictionary:;
- (id)copyStringRepresentation;
@end

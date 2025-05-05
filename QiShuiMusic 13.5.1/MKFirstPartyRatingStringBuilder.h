@interface MKFirstPartyRatingStringBuilder : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)ratingSummaryAttributedStringForMapItem:textColor:font:theme:;
+ (id)ratingAndReviewSummaryAttributedStringForMapItem:textColor:font:theme:;
+ (id)userRecommendedRatingSummaryAttributedStringForMapItem:textColor:font:theme:;
+ (id)ratingSymbolName;
+ (id)_colorForPercentage:;
+ (id)thumbRecommendStringWithMapItem:font:includeGlyph:;
+ (id)thumbRecommendStringWithMapItem:font:color:includeGlyph:;
+ (id)ratingPercentageAttributedStringForMapItem:textColor:font:theme:;
+ (id)percentageStringForMapItem:showNumberOfRatings:textColor:font:theme:;
+ (id)carPlayHeaderStringForMapItem:titleAttributes:providerAttributes:;
+ (id)userRecommendationStringWithFont:ratingState:numberOfPhotosAdded:;
+ (id)ratingColorForMapItem:;
@end

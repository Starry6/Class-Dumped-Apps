@interface MKThirdPartyRatingStringBuilder : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)ratingSummaryAttributedStringForMapItem:textColor:font:theme:;
+ (id)ratingAndReviewSummaryAttributedStringForMapItem:textColor:font:theme:;
+ (id)ratingSymbolName;
+ (id)carPlayHeaderStringForMapItem:titleAttributes:providerAttributes:;
+ (id)ratingColorForMapItem:;
@end

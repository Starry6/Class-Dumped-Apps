@interface MKRatingStringBuilder : NSObject
+ (id)ratingSummaryAttributedStringForMapItem:textColor:font:theme:;
+ (id)ratingAndReviewSummaryAttributedStringForMapItem:textColor:font:theme:;
+ (id)carPlayHeaderStringForMapItem:titleAttributes:providerAttributes:;
+ (id)ratingColorForMapItem:;
+ (id)ratingSymbolNameForMapItem:;
+ (Class)ratingStringProviderForMapItem:;
+ (id)delimitedPriceRangeAttributedStringForMapItem:textColor:font:;
+ (id)priceLabelStringFromMapItem:;
@end

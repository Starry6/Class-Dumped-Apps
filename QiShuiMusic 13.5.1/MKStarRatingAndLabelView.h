@interface MKStarRatingAndLabelView : UIView
+ (id)reviewsString:providerName:;
+ (id)ratingAndReviewsAsAttributedString:style:font:numberOfReviews:textColor:theme:;
+ (id)starRatingAndProviderAsAttributedStringForMapItem:textColor:font:showReviewsOrTips:theme:;
+ (id)starRatingAndProviderAsAttributedStringForMapItem:textColor:font:showReviewsOrTips:showNumberOfReviews:ratingStyle:theme:;
@end

@interface MKPOIEnrichmentAvailibility : NSObject
+ (BOOL)shouldShowAppleRatingsForMapItem:;
+ (BOOL)shouldShowMorePhotosGalleryForMapItem:;
+ (BOOL)shouldShowCallToActionForMapItem:;
+ (BOOL)shouldShowCallToActionForMapItem:options:;
+ (BOOL)shouldShowRatingsCallToActionForMapItem:;
+ (BOOL)shouldShowPhotosCallToActionForMapItem:;
+ (BOOL)shouldShowAddPhotoButtonsOnSingleFullScreenPhotoViewerForMapItem:photoAttribution:;
+ (BOOL)shouldShowAddPhotoButtonOnEndOfPhotoSliderForMapItem:;
+ (BOOL)shouldShowRatingInfoCallToActionOnPlaceCardHeaderForMapItem:;
+ (BOOL)shouldShowAddPhotoButtonOnMorePhotosGalleryForMapItem:usingAttributionsByProviderIds:;
+ (BOOL)shouldShowReportAnIssueOnPhotoGalleryForMapItem:photoAttribution:;
+ (BOOL)_shouldAllowUserToAddContributionsForMapItem:;
+ (BOOL)_isMapsApplication;
@end

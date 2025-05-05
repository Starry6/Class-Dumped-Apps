@interface MNJunctionViewImageLoader : NSObject
- (void)setJunctionViewImageWidth:height:;
- (id)init;
- (void).cxx_destruct;
- (void)setJunctionViewEvents:;
- (void)updateForLocation:remainingDistanceOnRoute:;
- (void)imagesForJunctionView:eventID:handler:;
- (void)_imagesForIDs:handler:;
- (id)_imagesForRequest:response:;
- (id)_stringForImageIDs:;
@end

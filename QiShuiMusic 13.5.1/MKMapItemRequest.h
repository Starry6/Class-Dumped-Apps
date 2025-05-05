@interface MKMapItemRequest : NSObject
@property (nonatomic) MKMapFeatureAnnotation featureAnnotation;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL loading;
- (BOOL)isLoading;
- (void)cancel;
- (BOOL)isCancelled;
- (void).cxx_destruct;
- (id)initWithMapFeatureAnnotation:;
- (void)getMapItemWithCompletionHandler:;
- (void)_performLookupRequestWithMapItemIdentifier:completionHandler:;
- (void)_handleMapItems:error:completionHandler:;
- (id)featureAnnotation;
@end

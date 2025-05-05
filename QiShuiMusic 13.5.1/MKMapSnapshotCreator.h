@interface MKMapSnapshotCreator : NSObject
@property (nonatomic) MKMapSnapshotRequest servingRequest;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_processRequest;
- (id)_newSnapshotWithView:;
- (void)_respondWithSnapshot;
- (void)createSnapShotWithCoordinate:zoomLevel:size:requester:context:;
- (id)recreateCurrentSnapshotWithRequester:context:;
- (void)flushRequestQueue;
- (void)createSnapShotWithCoordinate:zoomLevel:size:handler:;
- (id)servingRequest;
- (void)setServingRequest:;
+ (BOOL)supportsSharingThumbnails;
@end

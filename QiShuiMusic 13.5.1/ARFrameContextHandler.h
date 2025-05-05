@interface ARFrameContextHandler : NSObject
@property (nonatomic) {?=[4]} sessionTransform;
@property (nonatomic) BOOL sessionTransformUpdated;
@property (nonatomic) NSArray anchorsToAdd;
- (id)init;
- (id)sessionTransform;
- (void)stopTrackingAnchors:;
- (void)removeAnchor:;
- (id)anchorsToAdd;
- (void)addCollaborationData:;
- (void)resetSessionTransform;
- (void)clearAddedAnchors;
- (void).cxx_destruct;
- (BOOL)sessionTransformUpdated;
- (void)markFrameContextProcessed:;
- (void)addAnchor:;
- (void)setSessionTransform:;
- (void)clearInFlightContextsReapplyingChanges;
- (id)createdContextByConsumingPendingChanges;
@end

@interface BLSDiagnostics : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)allFlipbookFrames;
- (id)frameOnGlassWhenFlipbookLastCancelled;
- (void).cxx_destruct;
- (id)frameOnGlassNow;
- (id)frameWithUUID:;
- (void)invalidate;
- (id)surfaceForFrame:;
- (id)rawSurfaceForFrame:;
@end

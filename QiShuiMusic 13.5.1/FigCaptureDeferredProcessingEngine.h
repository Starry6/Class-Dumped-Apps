@interface FigCaptureDeferredProcessingEngine : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)graph:didFinishStartingWithError:;
- (void)dealloc;
- (void)releaseResources;
- (void)graphDidPrepareNodes:;
- (void)executeJob:;
+ (id)sharedProcessingEngine;
@end

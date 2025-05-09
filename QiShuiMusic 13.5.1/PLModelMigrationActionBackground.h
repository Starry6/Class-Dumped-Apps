@interface PLModelMigrationActionBackground : NSObject
@property (nonatomic) PLPhotoLibraryPathManager pathManager;
@property (nonatomic) PLModelMigratorLog logger;
@property (nonatomic) NSProgress progress;
@property (nonatomic) @? continuationHandler;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) NSString actionName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pathManager;
- (id)logger;
- (BOOL)isCancelled;
- (void)setProgress:;
- (void)setPathManager:;
- (void)setLogger:;
- (id)progress;
- (void)setup;
- (void).cxx_destruct;
- (id)actionName;
- (id)description;
- (id)appPrivateData;
- (id)continuationHandler;
- (void)setContinuationHandler:;
- (id)cancellableDiscreteProgressWithTotalUnitCount:pendingParentUnitCount:cancellationHandler:;
- (void)finalizeProgress;
- (id)initWithPathManager:logger:progress:continuationHandler:;
- (void)setResumeMarkerValue:;
- (id)resumeMarker;
- (BOOL)isCancelledWithResumeMarker:error:;
+ (id)actionDescription;
+ (long long)actionProgressWeight;
+ (id)shortenedMigrationActionClassName;
@end

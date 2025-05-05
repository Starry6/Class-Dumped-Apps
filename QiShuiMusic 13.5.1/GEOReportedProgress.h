@interface GEOReportedProgress : NSObject
@property (nonatomic) NSString kind;
@property (nonatomic) q totalUnitCount;
@property (nonatomic) q completedUnitCount;
@property (nonatomic) @? cancellationHandler;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) NSProgress progress;
- (void)setKind:;
- (id)initWithTotalUnitCount:;
- (void)cancel;
- (void)setCancellationHandler:;
- (BOOL)isCancelled;
- (id)cancellationHandler;
- (void)becomeCurrentWithPendingUnitCount:;
- (void)setCompletedUnitCount:;
- (id)kind;
- (void)resignCurrent;
- (id)progress;
- (void).cxx_destruct;
- (void)setTotalUnitCount:;
- (void)setUserInfoObject:forKey:;
- (long long)totalUnitCount;
- (long long)completedUnitCount;
- (void)addChild:withPendingUnitCount:;
+ (id)progressWithTotalUnitCount:;
@end

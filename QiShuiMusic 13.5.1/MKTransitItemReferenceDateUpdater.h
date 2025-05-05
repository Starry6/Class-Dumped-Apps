@interface MKTransitItemReferenceDateUpdater : NSObject
@property (nonatomic) <MKTransitItemReferenceDateUpdaterDelegate> delegate;
@property (nonatomic) BOOL active;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)setActive:;
- (BOOL)isActive;
+ (id)referenceDate;
+ (void)_referenceDateUpdateTimerFired;
+ (id)_currentTimeWithRoundedSeconds;
+ (double)referenceDateAsTimeInterval;
+ (BOOL)_needsUpdateReferenceDate;
+ (void)_updateReferenceDate;
+ (void)_scheduleReferenceDateUpdate;
+ (void)_cancelReferenceDateUpdate;
+ (void)_addUpdater:;
+ (void)_removeUpdater:;
+ (unsigned long long)_updaterCount;
@end

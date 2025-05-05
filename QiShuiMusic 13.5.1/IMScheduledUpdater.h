@interface IMScheduledUpdater : IMManualUpdater
@property (nonatomic) NSCountedSet holdingUpdatesKeys;
- (void)setNeedsUpdate;
- (void)dealloc;
- (void)updateIfNeeded;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTarget:action:;
- (void)invalidate;
- (void)endHoldingUpdatesForAllKeys;
- (void)beginHoldingUpdatesForKey:;
- (void)endHoldingUpdatesForKey:;
- (BOOL)isHoldingUpdates;
- (BOOL)isHoldingUpdatesForKey:;
- (id)holdingUpdatesKeys;
- (void)setHoldingUpdatesKeys:;
@end

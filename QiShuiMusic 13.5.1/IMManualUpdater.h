@interface IMManualUpdater : NSObject
@property (nonatomic) @ target;
@property (nonatomic) : action;
@property (nonatomic) BOOL needsUpdate;
- (void)setNeedsUpdate;
- (SEL)action;
- (void)setAction:;
- (void)updateIfNeeded;
- (void)setTarget:;
- (BOOL)needsUpdate;
- (void).cxx_destruct;
- (id)target;
- (id)description;
- (id)initWithTarget:action:;
- (void)setNeedsUpdate:;
@end

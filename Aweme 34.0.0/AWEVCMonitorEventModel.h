@interface AWEVCMonitorEventModel : NSObject
@property (nonatomic) BOOL didInit;
@property (nonatomic) BOOL didAppear;
@property (nonatomic) BOOL didClick;
@property (nonatomic) BOOL didDealloc;
- (BOOL)didClick;
- (void)setDidDealloc:;
- (BOOL)didDealloc;
- (void)setDidAppear:;
- (void)setDidClick:;
- (void)setDidInit:;
- (BOOL)didAppear;
- (BOOL)didInit;
@end

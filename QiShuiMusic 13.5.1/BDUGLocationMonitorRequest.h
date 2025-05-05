@interface BDUGLocationMonitorRequest : NSObject
@property (nonatomic) q level;
@property (nonatomic) @? changedCallback;
- (id)changedCallback;
- (id)initWithLevel:changedCallback:;
- (void)setChangedCallback:;
- (void)setLevel:;
- (long long)level;
- (void).cxx_destruct;
@end

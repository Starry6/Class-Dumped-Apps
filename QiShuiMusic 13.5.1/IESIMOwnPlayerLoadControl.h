@interface IESIMOwnPlayerLoadControl : NSObject
@property (nonatomic) NSLock safeRWLock;
@property (nonatomic) <IESPlayerLoadControlInterface> loadControl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLoadControl:;
- (id)loadControl;
- (long long)onTrackSelected:;
- (id)safeRWLock;
- (void)setSafeRWLock:;
- (BOOL)shouldStartPlayback:withplaybackSpeed:withreBuffering:;
- (id)init;
- (void).cxx_destruct;
@end

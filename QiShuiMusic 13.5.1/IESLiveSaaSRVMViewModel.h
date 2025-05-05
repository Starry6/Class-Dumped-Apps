@interface IESLiveSaaSRVMViewModel : NSObject
@property (nonatomic) ^v observationInfo;
@property (nonatomic) BOOL active;
@property (nonatomic) RACSignal didBecomeActiveSignal;
@property (nonatomic) RACSignal didBecomeInactiveSignal;
- (id)didBecomeActiveSignal;
- (id)didBecomeInactiveSignal;
- (id)forwardSignalWhileActive:;
- (id)throttleSignalWhileInactive:;
- (id)observationInfo;
- (void)setObservationInfo:;
- (void).cxx_destruct;
- (void)setActive:;
- (BOOL)isActive;
+ (BOOL)automaticallyNotifiesObserversForKey:;
@end

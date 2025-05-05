@interface IESECObservationManager : NSObject
@property (nonatomic) NSMutableArray observations;
- (id)observe:withEventHandler:;
- (void)unObserve:;
- (void)unObserveAll;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)observations;
- (void)setObservations:;
@end

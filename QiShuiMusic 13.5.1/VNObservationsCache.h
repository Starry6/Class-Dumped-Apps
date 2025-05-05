@interface VNObservationsCache : NSObject
- (id)init;
- (void)setObservations:forKey:;
- (void).cxx_destruct;
- (id)observationsForKey:;
- (id)observationsAcceptedByRequest:testedKeyHandler:;
@end

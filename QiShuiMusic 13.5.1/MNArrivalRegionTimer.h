@interface MNArrivalRegionTimer : NSObject
@property (nonatomic) <MNArrivalRegionTimerDelegate> delegate;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)updateForLocation:;
- (id)initWithArrivalRegion:;
@end

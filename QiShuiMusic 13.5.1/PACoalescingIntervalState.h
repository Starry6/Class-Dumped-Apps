@interface PACoalescingIntervalState : NSObject
@property (nonatomic) PAAccessInterval interval;
@property (nonatomic) double idleTime;
@property (nonatomic) double timestampAdjustment;
@property (nonatomic) NSSet assetIdentifiers;
- (void)dealloc;
- (id)initWithInterval:matcher:tracker:;
- (void)touch;
- (double)idleTime;
- (void).cxx_destruct;
- (double)timestampAdjustment;
- (id)description;
- (id)assetIdentifiers;
- (void)invalidate;
- (id)interval;
@end

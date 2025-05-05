@interface AVDelegatingPlaybackCoordinatorPlayCommand : AVDelegatingPlaybackCoordinatorPlaybackControlCommand
@property (nonatomic) float rate;
@property (nonatomic) {?=qiIq} itemTime;
@property (nonatomic) {?=qiIq} hostClockTime;
- (id)init;
- (id)originator;
- (void)dealloc;
- (float)rate;
- (id)expectedCurrentItemIdentifier;
- (id)initWithCoordinator:originator:expectedCurrentItemIdentifier:commandOrderIndex:rate:itemTime:hostClockTime:;
- (id)itemTime;
- (id)hostClockTime;
@end

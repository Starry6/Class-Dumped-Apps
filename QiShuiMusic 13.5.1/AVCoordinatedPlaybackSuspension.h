@interface AVCoordinatedPlaybackSuspension : NSObject
@property (nonatomic) NSString reason;
@property (nonatomic) NSDate beginDate;
- (id)beginDate;
- (void)end;
- (void)dealloc;
- (id)reason;
- (id)initWithCoordinator:reason:;
- (id)_figSuspension;
- (void)endProposingNewTime:;
@end

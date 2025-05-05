@interface PLTimedPerfCheck : NSObject
- (id)init;
- (void)dealloc;
- (id)stop;
- (void)setup;
- (id)perfCheckLogStringWithPerfCheckInfo:;
- (id)endSessionAndReturnPerfCheckExtraInformation;
- (id)perfUnitsFromPerfCheckInfo:;
+ (id)start;
@end

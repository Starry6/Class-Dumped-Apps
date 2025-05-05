@interface CLKeyboardMotionAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)smartCoverStateDidChange:;
- (void)monitorUpdateForDevice:added:;
- (void)inputReportForDevice:report:length:;
- (void)eventUpdateForDevice:event:;
@end

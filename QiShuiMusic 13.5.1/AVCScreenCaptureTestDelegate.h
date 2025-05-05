@interface AVCScreenCaptureTestDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)serverDidDisconnect:;
- (void)screenCapture:didStop:withError:;
- (void)screenCapture:didStart:withError:;
@end

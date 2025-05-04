@interface AWEProgressHotZoneConfig : NSObject
@property (nonatomic) BOOL shouldEnlargeHotZone;
@property (nonatomic) Q maskWindowGestureType;
@property (nonatomic) {UIEdgeInsets=dddd} hotEdgeInsetForPanGesture;
@property (nonatomic) {UIEdgeInsets=dddd} hotEdgeInsetForLongPress;
- (BOOL)shouldEnlargeHotZone;
- (void)setShouldEnlargeHotZone:;
- (unsigned long long)maskWindowGestureType;
- (void)setMaskWindowGestureType:;
- (id)hotEdgeInsetForPanGesture;
- (void)setHotEdgeInsetForPanGesture:;
- (id)hotEdgeInsetForLongPress;
- (void)setHotEdgeInsetForLongPress:;
@end

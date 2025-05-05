@interface MRMutableVirtualTouchDeviceDescriptor : MRVirtualTouchDeviceDescriptor
@property (nonatomic) BOOL absolute;
@property (nonatomic) BOOL integratedDisplay;
@property (nonatomic) (_MRHIDSize={?=ff}[2f]) screenSize;
- (void)setScreenSize:;
- (void)setAbsolute:;
- (void)setIntegratedDisplay:;
@end

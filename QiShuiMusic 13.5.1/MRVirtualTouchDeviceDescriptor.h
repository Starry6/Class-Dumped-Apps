@interface MRVirtualTouchDeviceDescriptor : NSObject
@property (nonatomic) BOOL absolute;
@property (nonatomic) BOOL integratedDisplay;
@property (nonatomic) (_MRHIDSize={?=ff}[2f]) screenSize;
- (BOOL)isAbsolute;
- (id)screenSize;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (BOOL)isIntegratedDisplay;
@end

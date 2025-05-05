@interface TVLNetworkTool : NSObject
- (id)getNetworkClass;
- (BOOL)IsLoopbackOrUnspecifiedAddress:;
- (BOOL)ShouldIgnoreInterface:policy:;
- (unsigned int)getCellularIndex;
- (int)getNetworkType;
- (BOOL)isCellularDefault;
- (BOOL)isWifiDefault;
@end

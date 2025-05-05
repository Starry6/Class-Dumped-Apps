@interface AVMDLiOSMultiNetwork : NSObject
+ (void)enableCellularUp:;
+ (unsigned int)getCurNetworkIndex;
+ (BOOL)switchToCellularNetwork;
+ (BOOL)switchToDefaultNetwork;
+ (void)updateNetworkIndex;
@end

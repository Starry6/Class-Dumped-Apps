@interface ICMutableNetworkConstraints : ICNetworkConstraints
- (void)setShouldAllowDataForAllNetworkTypes:;
- (void)setShouldAllowDataForCellularNetworkTypes:;
- (void)setShouldAllowDataForWiFiNetworkTypes:;
- (void)setSizeLimit:forNetworkType:;
- (void)setShouldAllowData:forNetworkType:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
@end

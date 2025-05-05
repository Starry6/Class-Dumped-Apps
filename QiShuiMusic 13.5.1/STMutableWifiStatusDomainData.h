@interface STMutableWifiStatusDomainData : STWifiStatusDomainData
@property (nonatomic) BOOL wifiActive;
@property (nonatomic) Q signalStrengthBars;
@property (nonatomic) BOOL associatedToIOSHotspot;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setWifiActive:;
- (void)setAssociatedToIOSHotspot:;
- (void)setSignalStrengthBars:;
- (BOOL)applyDiff:;
- (id)copyWithZone:;
@end

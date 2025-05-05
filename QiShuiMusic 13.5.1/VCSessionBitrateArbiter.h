@interface VCSessionBitrateArbiter : NSObject
@property (nonatomic) I maxBitrate2GUplink;
@property (nonatomic) I maxBitrate3GUplink;
@property (nonatomic) I maxBitrateExpensiveUplink;
@property (nonatomic) I maxBitrateNonExpensiveUplink;
@property (nonatomic) I maxBitrateWiFiUplink;
@property (nonatomic) I maxBitrate2GDownlink;
@property (nonatomic) I maxBitrate3GDownlink;
@property (nonatomic) I maxBitrateExpensiveDownlink;
@property (nonatomic) I maxBitrateNonExpensiveDownlink;
@property (nonatomic) I maxBitrateWiFiDownlink;
- (id)init;
- (void)dealloc;
- (BOOL)rangeCheck:;
- (void)readHardwareValues;
- (unsigned int)bitrateForStoreBagKey:connectionType:currentBitrate:isExpensive:;
- (void)readStoreBagValues;
- (unsigned int)maxBitrate2GUplink;
- (unsigned int)maxBitrate3GUplink;
- (unsigned int)maxBitrateWiFiUplink;
- (unsigned int)maxBitrate2GDownlink;
- (unsigned int)maxBitrate3GDownlink;
- (unsigned int)maxBitrateWiFiDownlink;
- (unsigned int)maxBitrateExpensiveUplink;
- (unsigned int)maxBitrateNonExpensiveUplink;
- (unsigned int)maxBitrateExpensiveDownlink;
- (unsigned int)maxBitrateNonExpensiveDownlink;
@end

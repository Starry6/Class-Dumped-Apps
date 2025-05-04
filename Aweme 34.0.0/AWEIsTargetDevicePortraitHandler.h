@interface AWEIsTargetDevicePortraitHandler : AWECommonPortraitHandler
@property (nonatomic) NSArray targetDeviceList;
@property (nonatomic) NSString isTargetDeviceStr;
- (id)getPortrait;
- (id)isTargetDeviceStr;
- (id)targetDeviceList;
- (void)setIsTargetDeviceStr:;
- (void)setTargetDeviceList:;
- (id)init;
- (void).cxx_destruct;
@end

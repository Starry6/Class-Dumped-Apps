@interface AWEIsLowEndDevicePortraitHandler : AWECommonPortraitHandler
@property (nonatomic) NSArray lowEndDeviceList;
@property (nonatomic) NSString isLowEndDeviceStr;
- (id)getPortrait;
- (id)lowEndDeviceList;
- (id)isLowEndDeviceStr;
- (void)setIsLowEndDeviceStr:;
- (id)obtainIsLowEndDeviceNew;
- (id)obtainIsLowEndDevice;
- (void)setLowEndDeviceList:;
- (id)init;
- (void).cxx_destruct;
@end

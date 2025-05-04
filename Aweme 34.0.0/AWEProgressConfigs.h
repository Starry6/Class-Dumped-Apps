@interface AWEProgressConfigs : NSObject
@property (nonatomic) NSArray elementArray;
@property (nonatomic) AWEProgressUIConfig uiConfig;
@property (nonatomic) AWEProgressHotZoneConfig hotZoneConfig;
- (id)elementArray;
- (id)uiConfig;
- (void)setUiConfig:;
- (void)setElementArray:;
- (id)hotZoneConfig;
- (void)setHotZoneConfig:;
- (void).cxx_destruct;
@end

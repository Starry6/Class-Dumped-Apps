@interface IESECBDImage : LynxUIImage
@property (nonatomic) IESECBDImageView imageView;
@property (nonatomic) NSDictionary geckoSource;
@property (nonatomic) NSDictionary monitorInfo;
@property (nonatomic) BOOL ecDisableDownsampling;
- (void)setGeckoSource:;
- (void)setMonitorInfo:;
- (BOOL)ecDisableDownsampling;
- (id)geckoSource;
- (void)geckoSource:requestReset:;
- (void)gradientTime:requestReset:;
- (id)monitorInfo;
- (void)monitorInfo:requestReset:;
- (void)setEcDisableDownsampling:;
- (void)setEcDisableDownsampling:requestReset:;
- (BOOL)shouldUseNewImage;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
- (id)createView;
+ (id)__lynx_prop_config__800;
+ (id)__lynx_prop_config__841;
+ (id)__lynx_prop_config__882;
+ (id)__lynx_prop_config__923;
+ (void)registerECBDImage;
@end

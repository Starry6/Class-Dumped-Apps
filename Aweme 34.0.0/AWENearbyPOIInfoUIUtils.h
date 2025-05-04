@interface AWENearbyPOIInfoUIUtils : AWENearbyCardUIUtils
+ (double)getScreenHeight;
+ (id)loadCDNResourceData:;
+ (void)trackNearbyGeckoResourceMonitorWithResult:loadType:channel:filePath:errorMsg:cdnLoadTime:;
+ (void)preloadGeckoResource;
+ (BOOL)isScreenHeightLarge667;
+ (id)getAdaptedBgImageWithHueIndex:;
+ (double)cardBottomOffset;
+ (double)tilingHeadImgHeigh;
+ (double)scrollTilingHeadHeighInSimpic;
+ (double)scrollTilingCardBottomOffsetInSimpic;
+ (id)getNearbyPOIInfoCardChannelName;
+ (id)backgroundImagePathWithHueIndex:;
@end

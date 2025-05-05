@interface VKInternalIconManager : NSObject
- (void)purge;
- (void)setIsCachingAtlases:;
- (id)init;
- (void)dealloc;
- (void)_startTileGroupObserver;
- (id)init:stylesheetVendor:;
- (void)_purgeStyleManagers;
- (id)imageForIconID:contentScale:sizeGroup:modifiers:;
- (id)imageForKey:value:contentScale:sizeGroup:modifiers:;
- (unsigned int)trafficIncidentTypeKey;
- (void)purgeNonsharedResources;
- (void).cxx_destruct;
- (unsigned int)styleAttributeTransitSystemTypeKey;
- (id)imageForImageSourceKey:;
- (id)imageForName:contentScale:sizeGroup:modifiers:;
- (id)imageForStyleAttributes:styleManager:contentScale:sizeGroup:modifiers:;
- (unsigned int)darkVariant;
- (BOOL)isCachingAtlases;
- (id).cxx_construct;
- (id)imageForStyleAttributes:withStylesheetName:contentScale:sizeGroup:modifiers:;
- (unsigned int)styleAttributeTransitTypeKey;
- (id)imageForDataID:text:contentScale:sizeGroup:modifiers:;
+ (unsigned char)convertSizeGroup:;
+ (long long)convertGrlSizeGroup:;
@end

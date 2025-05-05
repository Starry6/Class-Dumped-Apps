@interface VKIconManager : NSObject
- (void)purge;
- (void)setIsCachingAtlases:;
- (id)init;
- (void)dealloc;
- (id)imageForIconID:contentScale:sizeGroup:modifiers:;
- (id)imageForKey:value:contentScale:sizeGroup:modifiers:;
- (id)_internalIconManager;
- (unsigned int)trafficIncidentTypeKey;
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
+ (id)sharedManager;
@end

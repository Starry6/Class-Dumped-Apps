@interface CPAnalyticsPropertyProviderClassLoader : NSObject
+ (id)_loadPHPropertyProvider:forPHPhotoLibrary:;
+ (id)_loadDynamicPHPropertyProvider:forPHPhotoLibrary:;
+ (id)mediaPropertyProviderForPHPhotoLibrary:;
+ (id)propertyProviderForPHPhotoLibrary:;
@end

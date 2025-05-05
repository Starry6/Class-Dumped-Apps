@interface CPAnalyticsSystemProperties : NSObject
@property (nonatomic) NSMutableDictionary systemProperties;
@property (nonatomic) NSMutableDictionary dynamicProperties;
- (id)init;
- (void)setSystemProperties:;
- (id)propertyForKey:forEventName:payloadForSystemPropertyExtraction:;
- (void)removePhotoLibraryProperties;
- (id)systemProperties;
- (void).cxx_destruct;
- (void)setDynamicProperties:;
- (void)addProperty:withValue:;
- (id)dynamicProperties;
- (void)addDynamicProperty:withProvider:;
+ (id)dynamicPhotoLibraryProperties;
+ (id)staticPhotoLibraryProperties;
@end

@interface VISProvider : NSObject
+ (id)VISConfigurationForVersion:;
+ (id)VISProcessorForVersion:;
+ (id)_loadVISBundleForVersion:;
@end

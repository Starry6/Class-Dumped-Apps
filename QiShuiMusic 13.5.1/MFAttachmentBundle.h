@interface MFAttachmentBundle : NSObject
+ (BOOL)isFileBundleURL:;
+ (id)_stripBundlePath:entryPath:;
+ (id)dataForFileBundleURL:;
@end

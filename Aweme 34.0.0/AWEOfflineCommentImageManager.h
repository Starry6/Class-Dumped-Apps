@interface AWEOfflineCommentImageManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)getCacheName;
+ (id)getWebImageConfig;
+ (void)removeCommentImageCache;
+ (unsigned long long)imageTotalSize;
+ (BOOL)enableCache;
@end

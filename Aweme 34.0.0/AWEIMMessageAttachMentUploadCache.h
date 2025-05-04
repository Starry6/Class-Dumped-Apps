@interface AWEIMMessageAttachMentUploadCache : NSObject
+ (void)cacheItem:forData:type:;
+ (id)itemForData:type:;
+ (id)itemForMd5:type:;
+ (void)cacheItem:forMd5:type:;
+ (id)cacheKeyOfMd5:type:;
+ (void)fetchItemForFile:type:completion:;
+ (void)cacheItem:forFile:type:;
@end

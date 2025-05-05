@interface AWEIMMessageAttachMentUploadCache : NSObject
+ (void)cacheItem:forData:type:;
+ (void)cacheItem:forFile:type:;
+ (void)cacheItem:forMd5:type:;
+ (id)cacheKeyOfMd5:type:;
+ (void)fetchItemForFile:type:completion:;
+ (id)itemForData:type:;
+ (id)itemForMd5:type:;
@end

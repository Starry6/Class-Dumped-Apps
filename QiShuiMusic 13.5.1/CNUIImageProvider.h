@interface CNUIImageProvider : NSObject
+ (id)imageForResource:template:;
+ (id)uncachedImageForResource:template:;
+ (id)imageForResource:template:onCacheMiss:;
+ (id)cacheKeyForImageResourceName:template:;
+ (id)imageForResource:;
@end

@interface AWEMVChannelImageCache : NSObject
+ (id)preferredCacheNameWithModel:;
+ (id)channelImageCache;
+ (id)firstRenderCacheImageCache;
+ (void)prepareIfNeeded;
@end

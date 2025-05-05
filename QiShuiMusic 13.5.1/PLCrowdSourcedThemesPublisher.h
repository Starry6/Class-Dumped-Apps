@interface PLCrowdSourcedThemesPublisher : NSObject
+ (void)publishUUIDs:stream:pathManager:;
+ (id)publishedUUIDsInStream:pathManager:;
+ (id)_nameForStream:;
+ (id)_biomeStreamForStream:pathManager:;
@end

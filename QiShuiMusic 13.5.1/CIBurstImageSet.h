@interface CIBurstImageSet : NSObject
- (BOOL)isPortrait;
- (id)init;
- (void)dealloc;
- (id)initWithOptions:;
- (id)burstId;
- (void)addImageFromIOSurface:properties:identifier:completionBlock:;
- (id)bestImageIdentifiers;
- (id)coverImageIdentifier;
- (id)imageClusterForIdentifier:;
- (unsigned long long)imageClusterCount;
- (id)imageClusterForIndex:;
- (id)allImageIdentifiers;
- (id)statsForImageWithIdentifier:;
- (double)secondsSinceStart;
- (void)setLoggingListener:withUserInfo:;
- (BOOL)isAction;
+ (id)burstImageSet;
+ (id)burstImageSetWithOptions:;
+ (id)defaultVersionString;
@end

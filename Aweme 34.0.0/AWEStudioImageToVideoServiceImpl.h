@interface AWEStudioImageToVideoServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)fetchEffectWithID:completion:;
+ (id)createVideoGenerator;
+ (void)deleteVideoCacheWithScene:;
+ (id)cacheDirectoryForScene:;
@end

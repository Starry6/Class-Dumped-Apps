@interface BDXVideoManager : NSObject
+ (Class)fullScreenPlayerClz;
+ (void)setFullScreenPlayerClz:;
+ (void)setVideoCorePlayerClazz:;
+ (void)setVideoModelConverterClz:;
+ (Class)videoCorePlayerClazz;
+ (Class)videoModelConverterClz;
+ (void)setDelegate:;
+ (id)delegate;
@end

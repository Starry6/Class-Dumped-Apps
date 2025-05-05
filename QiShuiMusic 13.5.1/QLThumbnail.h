@interface QLThumbnail : NSObject
@property (nonatomic) NSURL url;
- (id)url;
- (id)initWithURL:;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)thumbnailCreationOperationForUseMode:descriptor:generateIfNeeded:;
- (id)thumbnailCreationOperationForUseMode:descriptor:;
- (id)imageForUseMode:descriptor:generateIfNeeded:contentRect:error:;
- (BOOL)provideImages:error:;
+ (id)sharedQueue;
+ (id)defaultDescriptors;
@end

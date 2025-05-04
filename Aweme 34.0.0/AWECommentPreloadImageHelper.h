@interface AWECommentPreloadImageHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)preloadImageWithModel:params:preloadImageCompletion:;
+ (id)preloadImageWithDict:params:preloadImageCompletion:;
+ (void)prefetchImageWithURL:imageSize:;
+ (void)trackPreloadImageWithCommentID:params:preloadImageCompletion:;
+ (void)trackPreloadImageWithCommentID:params:;
@end

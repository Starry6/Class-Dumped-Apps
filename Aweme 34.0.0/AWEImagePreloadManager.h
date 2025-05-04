@interface AWEImagePreloadManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)preloadCoverImageWithModel:useNormalCover:bizTag:;
- (void)preloadCoverImageWithModel:useNormalCover:;
+ (id)sharedInstance;
@end

@interface AWECommentSwiftModel.CommentManagerMediaFeedConfiguration : NSObject
@property (nonatomic) Q sceneType;
@property (nonatomic) NSArray commentModelArray;
@property (nonatomic) NSArray commentImageModelArray;
@property (nonatomic) q landingIndex;
@property (nonatomic) q currentImageIndexInMulti;
@property (nonatomic) NSArray componentInfoArray;
- (void)setLandingIndex:;
- (void)setCurrentImageIndexInMulti:;
- (void)setComponentInfoArray:;
- (long long)landingIndex;
- (long long)currentImageIndexInMulti;
- (id)commentModelArray;
- (id)commentImageModelArray;
- (id)interactionConfig;
- (BOOL)disableCustomTransition;
- (id)componentInfoArray;
- (void)setCommentModelArray:;
- (void)setCommentImageModelArray:;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)interactionType;
- (unsigned long long)sceneType;
- (void)setSceneType:;
@end

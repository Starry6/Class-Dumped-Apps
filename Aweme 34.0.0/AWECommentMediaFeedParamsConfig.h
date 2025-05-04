@interface AWECommentMediaFeedParamsConfig : NSObject
@property (nonatomic) Q sceneType;
@property (nonatomic) Q appearType;
@property (nonatomic) <AWECommentGeneralModelProtocol> data;
@property (nonatomic) AWECommentMediaFeedBasicParams basicParams;
@property (nonatomic) AWECommentMediaFeedParams mediaFeedParams;
- (id)basicParams;
- (id)initWithData:basicParams:mediaFeedParams:;
- (id)mediaFeedParams;
- (unsigned long long)appearType;
- (void)setAppearType:;
- (id)init;
- (void).cxx_destruct;
- (id)data;
- (unsigned long long)sceneType;
- (void)setSceneType:;
@end

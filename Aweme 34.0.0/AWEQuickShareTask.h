@interface AWEQuickShareTask : NSObject
@property (nonatomic) <AWEQuickShareTaskDelegate> delegate;
@property (nonatomic) AWEVideoPublishViewModel publishModel;
@property (nonatomic) <AWEShareToStoryModelProtocol> storyModel;
@property (nonatomic) ACCEditorSilentPublisher silentPublisher;
- (id)publishModel;
- (void)setPublishModel:;
- (void)setSilentPublisher:;
- (void)doPublish;
- (id)silentPublisher;
- (id)initWithStoryModel:;
- (id)delegate;
- (void)cancel;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)setDelegate:;
- (void)start;
- (void)setStoryModel:;
- (id)storyModel;
@end

@interface AWESearchDecoratorPublishProgressViewModuleContext : NSObject
@property (nonatomic) UIViewController bindUIViewController;
@property (nonatomic) @? canBeginShowBlock;
@property (nonatomic) @? addProgressViewInControllerBlock;
@property (nonatomic) @? removeProgressViewInControllerBlock;
@property (nonatomic) @? didClickBlock;
@property (nonatomic) @? onProgressViewShowTrackBlock;
@property (nonatomic) @? onProgressViewClickTrackBlock;
- (id)didClickBlock;
- (void)setDidClickBlock:;
- (id)canBeginShowBlock;
- (void)setCanBeginShowBlock:;
- (id)addProgressViewInControllerBlock;
- (void)setAddProgressViewInControllerBlock:;
- (id)bindUIViewController;
- (void)setBindUIViewController:;
- (id)onProgressViewShowTrackBlock;
- (id)removeProgressViewInControllerBlock;
- (void)setRemoveProgressViewInControllerBlock:;
- (id)onProgressViewClickTrackBlock;
- (void)setOnProgressViewShowTrackBlock:;
- (void)setOnProgressViewClickTrackBlock:;
- (void).cxx_destruct;
@end

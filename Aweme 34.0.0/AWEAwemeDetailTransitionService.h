@interface AWEAwemeDetailTransitionService : NSObject
@property (nonatomic) UIView imagePreviewMaskView;
@property (nonatomic) <AWEAwemeDetailImagePreviewFromContextProvider> awemeDetailImagePreviewFromContextInstance;
@property (nonatomic) <AWEAwemeNewDetailTableContainerProtocol> container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initialDataSourceFetchDidFinished;
- (void)configWithParams:;
- (id)awemeDetailImagePreviewFromContextInstance;
- (void)setImagePreviewMaskView:;
- (void)setAwemeDetailImagePreviewFromContextInstance:;
- (void)setupCoverTransitionWithParams:;
- (void)transferImagePreviewMask;
- (id)imagePreviewMaskView;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
@end

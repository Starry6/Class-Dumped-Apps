@interface AWEGrouponShowHalfScreenResult : NSObject
@property (nonatomic) AWEGrouponHalfScreenContainerModel halfScreenContainerModel;
@property (nonatomic) BOOL success;
@property (nonatomic) UIViewController containerVC;
@property (nonatomic) NSString errMsg;
@property (nonatomic) @? showCompletion;
@property (nonatomic) @? closeHandler;
- (void)setContainerVC:;
- (id)errMsg;
- (id)closeHandler;
- (id)showCompletion;
- (void)setShowCompletion:;
- (void)setErrMsg:;
- (id)containerVC;
- (void)setCloseHandler:;
- (void)setHalfScreenContainerModel:;
- (id)halfScreenContainerModel;
- (void)setSuccess:;
- (void).cxx_destruct;
- (BOOL)success;
@end

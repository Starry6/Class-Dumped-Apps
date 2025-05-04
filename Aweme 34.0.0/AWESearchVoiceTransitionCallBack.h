@interface AWESearchVoiceTransitionCallBack : NSObject
@property (nonatomic) @? translateResultCallBack;
@property (nonatomic) @? translateFailedCallBack;
@property (nonatomic) @? translateConnectedCallBack;
@property (nonatomic) @? finishedCallBack;
@property (nonatomic) BOOL isGetResult;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onMessageReceived:withBlock:;
- (id)translateFailedCallBack;
- (id)translateResultCallBack;
- (void)setTranslateResultCallBack:;
- (void)setTranslateFailedCallBack:;
- (void)setIsGetResult:;
- (BOOL)isGetResult;
- (id)finishedCallBack;
- (id)translateConnectedCallBack;
- (void)setTranslateConnectedCallBack:;
- (void)setFinishedCallBack:;
- (void).cxx_destruct;
@end

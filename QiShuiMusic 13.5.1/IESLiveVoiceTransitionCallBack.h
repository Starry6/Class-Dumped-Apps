@interface IESLiveVoiceTransitionCallBack : NSObject
@property (nonatomic) @? translateResultCallBack;
@property (nonatomic) @? translateFailedCallBack;
@property (nonatomic) @? translateConnectedBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onMessageReceived:withBlock:;
- (void)setTranslateConnectedBlock:;
- (void)setTranslateFailedCallBack:;
- (void)setTranslateResultCallBack:;
- (id)translateConnectedBlock;
- (id)translateFailedCallBack;
- (id)translateResultCallBack;
- (void).cxx_destruct;
@end

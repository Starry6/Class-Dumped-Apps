@interface AnnieXAsyncManager : NSObject
@property (nonatomic) <LynxAsyncManagerProtocol> asyncManager;
@property (nonatomic) IESForestRequestParameters forestParams;
- (void)asyncLayoutLynxWithCardModel:bid:frame:finishCallBack:;
- (id)asyncManager;
- (id)forestParams;
- (void)setAsyncManager:;
- (void)setForestParams:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end

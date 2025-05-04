@interface AWEShareBaseStage : NSObject
@property (nonatomic) <AWEShareStageDelegate> delegate;
@property (nonatomic) AWEShareContext context;
@property (nonatomic) <AWEShareChannel> channel;
@property (nonatomic) <AWEShareView> shareView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)shareView;
- (void)finishThenContinue;
- (void)finishWithEnded;
- (void)finishWithCancelled;
- (void)willBecomeModal;
- (void)dismissViewIfNeededWithCompletion:;
- (void)run;
- (id)delegate;
- (id)channel;
- (void)finishWithError:;
- (void)finishWithResult:error:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)context;
@end

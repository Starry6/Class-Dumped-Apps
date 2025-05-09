@interface IESLiveGiveGiftTimeSequenceSender : NSObject
@property (nonatomic) IESLiveCountTimer timer;
@property (nonatomic) BOOL running;
@property (nonatomic) IESLiveGiveGiftTransaction transaction;
@property (nonatomic) <IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (nonatomic) <IESLiveGiveGiftSequenceSenderDataSource> dataSource;
@property (nonatomic) IESLiveGiftPanelDataSharing dataSharing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)recipientRouter;
- (void)setDataSharing:;
- (id)dataSharing;
- (id)getfirstSendSuccFromGiftPanelTimeIntervalStr;
- (void)setRecipientRouter:;
- (void)setTransaction:;
- (id)transaction;
- (void)setDataSource:;
- (void)dealloc;
- (void)setRunning:;
- (BOOL)running;
- (void)stop;
- (void)run;
- (void)setTimer:;
- (id)dataSource;
- (void).cxx_destruct;
- (id)timer;
- (void)endTransaction:;
- (void)loop;
@end

@interface IESLiveGiveGiftResponseSequenceSender : NSObject
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
- (void)loop:;
- (void)setRecipientRouter:;
- (void)setTransaction:;
- (id)transaction;
- (void)setDataSource:;
- (void)setRunning:;
- (BOOL)running;
- (void)stop;
- (void)run;
- (id)dataSource;
- (void).cxx_destruct;
- (void)endTransaction:;
@end

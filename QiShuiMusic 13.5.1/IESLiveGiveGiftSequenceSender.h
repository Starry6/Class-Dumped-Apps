@interface IESLiveGiveGiftSequenceSender : NSObject
@property (nonatomic) IESLiveGiveGiftTimeSequenceSender timeSequenceSender;
@property (nonatomic) IESLiveGiveGiftResponseSequenceSender responseSequenceSender;
@property (nonatomic) BOOL isUsingResponseSender;
@property (nonatomic) <IESLiveGiveGiftSequenceSenderDataSource> dataSource;
@property (nonatomic) IESLiveGiftPanelDataSharing dataSharing;
- (void)setDataSharing:;
- (id)dataSharing;
- (void)didSetAttachingDIContext;
- (BOOL)isUsingResponseSender;
- (id)responseSequenceSender;
- (id)sequenceSender;
- (void)setIsUsingResponseSender:;
- (void)setResponseSequenceSender:;
- (void)setTimeSequenceSender:;
- (id)timeSequenceSender;
- (void)setDataSource:;
- (id)init;
- (void)run;
- (id)dataSource;
- (void).cxx_destruct;
- (void)endTransaction:;
@end

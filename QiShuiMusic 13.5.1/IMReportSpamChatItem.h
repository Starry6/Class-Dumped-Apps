@interface IMReportSpamChatItem : IMTranscriptChatItem
@property (nonatomic) BOOL wasReportedAsSpam;
@property (nonatomic) BOOL isGroupMessage;
@property (nonatomic) BOOL hasMultipleMessages;
@property (nonatomic) BOOL showReportSMSSpam;
- (BOOL)isGroupMessage;
- (BOOL)hasMultipleMessages;
- (BOOL)showReportSMSSpam;
- (id)_initWithItem:wasReportedAsSpam:isGroup:hasMultipleMessages:showReportSMSSpam:;
- (BOOL)wasReportedAsSpam;
@end

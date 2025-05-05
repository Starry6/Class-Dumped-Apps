@interface IMUnavailabilityIndicatorChatItem : IMTranscriptChatItem
@property (nonatomic) IMHandle handle;
@property (nonatomic) BOOL displayNotifyAnywayButton;
@property (nonatomic) <IMUnavailabilityIndicatorChatItemDelegate> unavailabilityIndicatorChatItemDelegate;
- (id)handle;
- (void).cxx_destruct;
- (void)setUnavailabilityIndicatorChatItemDelegate:;
- (BOOL)displayNotifyAnywayButton;
- (id)_initWithHandle:displayNotifyAnywayButton:;
- (void)setDisplayNotifyAnywayButton:;
- (id)unavailabilityIndicatorChatItemDelegate;
@end

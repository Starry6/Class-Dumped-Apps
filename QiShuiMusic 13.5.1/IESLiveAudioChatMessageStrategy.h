@interface IESLiveAudioChatMessageStrategy : IESLiveMessageNodeStrategy
@property (nonatomic) {CGSize=dd} waveViewSize;
@property (nonatomic) NSString filePath;
@property (nonatomic) NSAttributedString nameString;
@property (nonatomic) NSAttributedString durationString;
- (void)addAccessibilityStringTo:;
- (void)addTapActionWithNode:;
- (void)configUIWithNode:;
- (BOOL)doFilterForMessageList:;
- (id)innerViewSizeAfterOptWithMaxLayoutWidth:node:;
- (id)innerViewSizeBeforeOptWithMaxLayoutWidth:node:;
- (id)innerViewSizeWithMaxLayoutWidth:node:;
- (void)jointAttributedString:withMessage:;
- (id)localNameColor;
- (id)needLoadOtherImageURLsForMessage:;
- (void)prepareDataForAttributedStringWithMessage:;
- (void)setWaveViewSize:;
- (id)textLayoutSizeWithAttributedString:layoutSize:;
- (void)updateNameStringAttachmentIfNeed:;
- (void)updateNodeOnCreated:;
- (id)waveViewSize;
- (id)filePath;
- (void)setFilePath:;
- (void).cxx_destruct;
- (id)durationString;
- (void)setDurationString:;
- (id)nameString;
- (void)setNameString:;
@end

@interface AWEIMTopGroupNoticeMessage : AWEIMGroupNoticeMessage
@property (nonatomic) Q groupCreateType;
@property (nonatomic) Q style;
@property (nonatomic) double noticeLabelWidth;
@property (nonatomic) double profileLabelWidth;
- (unsigned long long)groupCreateType;
- (void)setGroupCreateType:;
- (id)initWithContentDict:;
- (id)getContentDict;
- (double)noticeLabelWidth;
- (void)setNoticeLabelWidth:;
- (double)profileLabelWidth;
- (void)setProfileLabelWidth:;
- (unsigned long long)style;
- (void)setStyle:;
- (void)setConversationID:;
@end

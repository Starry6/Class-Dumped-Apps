@interface AWEIMNewNoticeMessage : AWEIMNoticeMessage
@property (nonatomic) NSString fallbackTips;
- (id)fallbackTips;
- (id)getContentDict;
- (id)initWithContentDict:;
- (id)initWithTips:templateArray:fallbackTips:;
- (void)setAttachMsg:;
- (void)setAttachStrangerMsg:;
- (void)setFallbackTips:;
- (void)setLocalExtWithAttachMsg:;
- (void).cxx_destruct;
@end

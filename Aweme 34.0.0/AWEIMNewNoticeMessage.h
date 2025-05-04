@interface AWEIMNewNoticeMessage : AWEIMNoticeMessage
@property (nonatomic) NSString fallbackTips;
- (id)initWithContentDict:;
- (id)getContentDict;
- (BOOL)isUserCellType;
- (id)fallbackTips;
- (void)setLocalExtWithAttachMsg:;
- (id)initWithTips:templateArray:fallbackTips:;
- (void)setAttachMsg:;
- (void)setAttachStrangerMsg:;
- (void)setFallbackTips:;
- (void).cxx_destruct;
@end

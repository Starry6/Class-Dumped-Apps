@interface IESLiveGiftMessageStrategy : IESLiveMessageNodeStrategy
- (id)getFinalContent;
- (id)attachingDIContext;
- (BOOL)doFilterForMessageList:;
- (id)giftIconURL;
- (void)jointAttributedString:withMessage:;
- (id)localContentColor;
- (id)localNameColor;
- (BOOL)needFoldForMessage:;
- (id)needLoadOtherImageURLsForMessage:;
- (id)config;
@end

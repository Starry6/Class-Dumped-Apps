@interface AWEFormatMessageCellComponentConfig : IESIMBaseMessageCellComponentConfig
- (id)cellViewModelComponents:;
- (id)userMessageTemplateComponents:;
- (id)userMessageQuoteReplyChildComponents:;
- (id)userMessageNameContainerChildComponents:;
- (id)userMessageTemplateLazyComponents:;
- (id)userMessageTailChildComponents:;
- (id)userMessageTemplateMenuComponents:;
- (id)systemMessageTemplateComponents:;
- (id)systemMessageTemplateLazyComponents:;
+ (id)userMessageExternalRefChildComponents:;
@end

@interface AWEIMXLiteInteractionMessage : AWEIMMessage
@property (nonatomic) NSInteger type;
- (id)calculateAttributedContent;
- (id)getContentDict;
- (id)initWithContentDict:;
- (int)type;
+ (id)liteInteractionContent;
+ (id)contentAttributes;
@end

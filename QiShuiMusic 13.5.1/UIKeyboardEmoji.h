@interface UIKeyboardEmoji : NSObject
@property (nonatomic) NSString emojiString;
@property (nonatomic) Q variantMask;
- (id)key;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithString:withVariantMask:;
- (id)emojiString;
- (void)setEmojiString:;
- (unsigned long long)variantMask;
- (void)setVariantMask:;
+ (id)emojiWithString:withVariantMask:;
+ (BOOL)shouldHighlightEmoji:;
@end

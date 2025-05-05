@interface SFLinkHoverEvent : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) q modifierFlags;
@property (nonatomic) NSAttributedString attributedStatusBarMessage;
- (id)url;
- (void).cxx_destruct;
- (long long)modifierFlags;
- (BOOL)isEqual:;
- (id)initWithHoveredLinkURL:forCurrentURL:modifierFlags:frame:targetFrame:;
- (id)_formattedMessage;
- (id)attributedStatusBarMessage;
@end

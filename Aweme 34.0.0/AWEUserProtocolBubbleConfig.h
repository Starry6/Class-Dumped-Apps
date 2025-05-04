@interface AWEUserProtocolBubbleConfig : NSObject
@property (nonatomic) double offset;
@property (nonatomic) {CGPoint=dd} anchorOffset;
@property (nonatomic) UIView forView;
@property (nonatomic) UIView container;
@property (nonatomic) Q position;
@property (nonatomic) BOOL showCustomBubbleView;
- (id)forView;
- (void)setForView:;
- (void)setShowCustomBubbleView:;
- (BOOL)showCustomBubbleView;
- (void)setContainer:;
- (id)container;
- (id)init;
- (void)setOffset:;
- (double)offset;
- (unsigned long long)position;
- (void).cxx_destruct;
- (void)setPosition:;
- (id)anchorOffset;
- (void)setAnchorOffset:;
@end

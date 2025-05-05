@interface UIKBRenderFactoryLayoutSegment : NSObject
@property (nonatomic) UIKBRenderTraits traits;
@property (nonatomic) NSInteger keyStates;
@property (nonatomic) BOOL requireAllMatches;
- (id)traits;
- (id)initWithTraits:;
- (BOOL)requireAllMatches;
- (int)keyStates;
- (BOOL)containsPoint:inRect:withKeyplane:;
- (void).cxx_destruct;
- (void)addLayoutRect:asTriangle:;
- (void)setRequireAllMatches:;
- (BOOL)shouldOverlayTraitsForKey:;
- (void)setKeyStates:;
- (void)addRelativeLayoutRectFromEdge:ofCachedKey:;
+ (id)segmentWithTraits:;
@end

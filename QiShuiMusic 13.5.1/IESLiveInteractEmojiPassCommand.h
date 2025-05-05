@interface IESLiveInteractEmojiPassCommand : IESLiveInteractEmojiBaseCommand
@property (nonatomic) {CGPoint=dd} fromCenter;
- (id)beginPosition:effect:;
- (void)dispatch:effect:to:;
- (id)fromCenter;
- (void)linearMoveAnimation:effect:to:completed:;
- (void)passEffectAnimation:effect:to:completed:;
- (void)setFromCenter:;
- (void)removeAnimation:;
+ (id)viewsTable;
@end

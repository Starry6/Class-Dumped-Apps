@interface NSISPlaybackOperation : NSObject
- (id)init;
- (void)dealloc;
- (void)_addToEngine:;
- (id)unwrapVariable:;
- (id)unwrapLinearExpression:onEngine:;
- (void)playbackOneAction:onEngine:;
@end

@interface AWECommentSwiftService.ChainFlow : NSObject
- (id)flowBegin:snapShot:;
- (id)flowBegin:snapShot:preChainNode:;
- (id)flowBegin:snapShot:preChainNode:host:;
- (id)flowBegin:snapShot:preChainNode:host:asynNode:;
- (id)flowAppend:snapShot:;
- (id)flowAppend:snapShot:preChainNode:;
- (id)flowAppend:snapShot:preChainNode:host:;
- (id)flowAppend:snapShot:preChainNode:host:asynNode:;
- (id)flowEnd:snapShot:;
- (id)flowEnd:snapShot:preChainNode:;
- (id)flowEnd:snapShot:preChainNode:host:;
- (void)flowSingleNode:snapShot:;
- (id)init;
- (void).cxx_destruct;
@end

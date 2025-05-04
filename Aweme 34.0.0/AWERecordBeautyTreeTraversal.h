@interface AWERecordBeautyTreeTraversal : NSObject
+ (BOOL)isEnableRecordBeautyAddStyleEffectSwitchStatus;
+ (void)preOrderTraversalWithNode:block:;
+ (void)levelOrderTraversalWithNode:block:;
+ (void)postOrderTraversalWithNode:shouldAppendNodeBlock:block:;
@end

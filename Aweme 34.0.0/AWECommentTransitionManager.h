@interface AWECommentTransitionManager : NSObject
+ (BOOL)isCommentVCTransition;
+ (BOOL)isCommentFullScreenAtTop;
+ (void)updateIsPartialFullScreenZoomOutTransition:;
+ (BOOL)isFullScreenCommentVCTransition;
+ (BOOL)isFullScreenZoomInTransition;
+ (BOOL)isPartialScreenZoomInTransition;
+ (void)tryToCancelInteractiveTransitionWithFromProtocol:willCancelHandler:;
+ (BOOL)isCommentVCNonInteractiveZoomInOrOutTransition;
+ (BOOL)isCommentMeidaFeedTransition;
@end

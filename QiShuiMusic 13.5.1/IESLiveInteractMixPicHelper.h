@interface IESLiveInteractMixPicHelper : NSObject
+ (id)attachingDIContext;
+ (void)composeMixPic;
+ (BOOL)enablePictureMixer;
+ (void)endPushMixpicBufferWithIndex:;
+ (void)endPushMixpicBufferWithStreamLayoutRects:;
+ (void)pushMixPicBuffer:withRect:index:;
+ (void)pushMixPicBufferWithBuffersMap:streamLayoutRects:;
@end

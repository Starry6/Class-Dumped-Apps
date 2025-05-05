@interface BWStillImageCaptureDelegateCallbackInfo : NSObject
@property (nonatomic) I flag;
@property (nonatomic) {?=qiIq} pts;
@property (nonatomic) BOOL isPreBracketFrame;
- (unsigned int)flag;
- (id)initWithFlag:pts:isPreBracketFrame:;
- (BOOL)isPreBracketFrame;
- (id)initWithFlag:;
- (id)pts;
@end

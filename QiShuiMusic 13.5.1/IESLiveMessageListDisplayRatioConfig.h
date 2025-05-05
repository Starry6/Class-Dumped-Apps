@interface IESLiveMessageListDisplayRatioConfig : NSObject
@property (nonatomic) q lowCommentActionCount;
@property (nonatomic) q middleCommentActionCount;
@property (nonatomic) q highCommentActionCount;
@property (nonatomic) q lowBusinessActionCount;
@property (nonatomic) q middleBusinessActionCount;
@property (nonatomic) q highBusinessActionCount;
@property (nonatomic) q lowBasicActionCount;
@property (nonatomic) q middleBasicActionCount;
@property (nonatomic) q highBasicActionCount;
- (long long)highBasicActionCount;
- (long long)highBusinessActionCount;
- (long long)highCommentActionCount;
- (long long)lowBasicActionCount;
- (long long)lowBusinessActionCount;
- (long long)lowCommentActionCount;
- (long long)middleBasicActionCount;
- (long long)middleBusinessActionCount;
- (long long)middleCommentActionCount;
- (void)setHighBasicActionCount:;
- (void)setHighBusinessActionCount:;
- (void)setHighCommentActionCount:;
- (void)setLowBasicActionCount:;
- (void)setLowBusinessActionCount:;
- (void)setLowCommentActionCount:;
- (void)setMiddleBasicActionCount:;
- (void)setMiddleBusinessActionCount:;
- (void)setMiddleCommentActionCount:;
@end

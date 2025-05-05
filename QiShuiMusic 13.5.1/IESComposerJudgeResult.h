@interface IESComposerJudgeResult : NSObject
@property (nonatomic) NSInteger errCode;
@property (nonatomic) NSInteger result;
- (int)errCode;
- (void)setErrCode:;
- (int)result;
- (id)init;
- (void)setResult:;
@end

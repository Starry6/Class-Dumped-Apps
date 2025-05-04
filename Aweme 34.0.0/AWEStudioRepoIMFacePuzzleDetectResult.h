@interface AWEStudioRepoIMFacePuzzleDetectResult : NSObject
@property (nonatomic) BOOL result;
@property (nonatomic) BOOL needRetry;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) q errorCode;
@property (nonatomic) BOOL needCloseCamera;
@property (nonatomic) BOOL needCloseAnswerView;
@property (nonatomic) NSString submitButtonText;
- (BOOL)needRetry;
- (void)setNeedRetry:;
- (BOOL)needCloseAnswerView;
- (void)setNeedCloseAnswerView:;
- (void)setSubmitButtonText:;
- (id)submitButtonText;
- (void)setNeedCloseCamera:;
- (BOOL)needCloseCamera;
- (void)setResult:;
- (void)setErrorCode:;
- (long long)errorCode;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (BOOL)result;
@end

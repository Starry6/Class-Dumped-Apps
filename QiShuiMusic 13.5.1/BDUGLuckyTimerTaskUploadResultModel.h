@interface BDUGLuckyTimerTaskUploadResultModel : BDUGLuckyJSONModel
@property (nonatomic) BOOL expireState;
@property (nonatomic) double ackedTs;
- (double)ackedTs;
- (void)setAckedTs:;
- (BOOL)expireState;
- (void)setExpireState:;
@end

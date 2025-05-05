@interface TTACustomWapAuthCallbackRespModel : TTABaseRespModel
@property (nonatomic) TTACustomWapAuthCallbackModel data;
- (id)initWithWapAuthCallbackURL:;
- (BOOL)isAccounntBanned;
- (BOOL)isAccounntLimited;
- (BOOL)isAuthPlatformConflict;
- (BOOL)isBindConflict;
- (BOOL)isBindFailed;
- (BOOL)isDeviceBanned;
- (id)data;
- (void).cxx_destruct;
- (void)setData:;
- (BOOL)isCanceling;
@end

@interface AWEIMWidgetInfoStreakPetElfInfoModel : AWEBaseApiModel
@property (nonatomic) NSString staticURI;
@property (nonatomic) NSString staticSkey;
@property (nonatomic) NSString statusDesc;
@property (nonatomic) q beginTime;
@property (nonatomic) q endTime;
@property (nonatomic) Q streakState;
- (id)statusDesc;
- (void)setStatusDesc:;
- (id)staticURI;
- (id)staticSkey;
- (void)setStaticURI:;
- (void)setStaticSkey:;
- (unsigned long long)streakState;
- (void)setStreakState:;
- (long long)endTime;
- (void)setEndTime:;
- (long long)beginTime;
- (void)setBeginTime:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface AWELoginGuideStrategyResult : NSObject
@property (nonatomic) BOOL canShow;
@property (nonatomic) BOOL needNewPeriod;
@property (nonatomic) BOOL needResetSkip;
@property (nonatomic) BOOL needResetFail;
- (BOOL)canShow;
- (void)setCanShow:;
- (BOOL)needResetSkip;
- (BOOL)needNewPeriod;
- (void)setNeedNewPeriod:;
- (void)setNeedResetSkip:;
- (BOOL)needResetFail;
- (void)setNeedResetFail:;
- (id)init;
@end

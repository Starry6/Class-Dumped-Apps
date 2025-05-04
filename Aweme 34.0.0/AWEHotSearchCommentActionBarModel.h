@interface AWEHotSearchCommentActionBarModel : NSObject
@property (nonatomic) NSString timeIpText;
@property (nonatomic) BOOL userDigged;
@property (nonatomic) NSString diggCountText;
@property (nonatomic) BOOL needAnimate;
- (BOOL)userDigged;
- (void)setUserDigged:;
- (id)diggCountText;
- (void)setDiggCountText:;
- (id)timeIpText;
- (BOOL)needAnimate;
- (void)setNeedAnimate:;
- (void)setTimeIpText:;
- (void).cxx_destruct;
@end

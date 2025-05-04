@interface AWELiveLocalLifeIconAnimationRecond : NSObject
@property (nonatomic) NSString animationKey;
@property (nonatomic) q totalPlayedTimes;
@property (nonatomic) BOOL outOfTimes;
@property (nonatomic) BOOL isShowForMaxTimes;
@property (nonatomic) q clickExpiredTimeStamp;
@property (nonatomic) q skipExpiredTimeStamp;
@property (nonatomic) NSMutableDictionary originDic;
- (void)setOriginDic:;
- (id)originDic;
- (void)setAnimationKey:;
- (long long)skipExpiredTimeStamp;
- (long long)clickExpiredTimeStamp;
- (long long)totalPlayedTimes;
- (void)setOutOfTimes:;
- (BOOL)isShowForMaxTimes;
- (void)setIsShowForMaxTimes:;
- (void)setTotalPlayedTimes:;
- (void)setClickExpiredTimeStamp:;
- (void)setSkipExpiredTimeStamp:;
- (BOOL)outOfTimes;
- (void).cxx_destruct;
- (id)initWithDictionary:;
- (id)animationKey;
@end

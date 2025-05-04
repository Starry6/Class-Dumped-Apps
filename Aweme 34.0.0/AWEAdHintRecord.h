@interface AWEAdHintRecord : NSObject
@property (nonatomic) q dislikeCount;
@property (nonatomic) NSArray lastThreeHintDates;
- (void)clearDislike;
- (void)clearHintDates;
- (void)dislikeOnce;
- (void)showHintOnce;
- (long long)dislikeCount;
- (id)lastThreeHintDates;
- (void)setLastThreeHintDates:;
- (void)setDislikeCount:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end

@interface CSJInteractionMethodParams : NSObject
@property (nonatomic) NSString loadingText;
@property (nonatomic) q onlylpLoadingMaxtime;
@property (nonatomic) q straightLpShowtime;
- (long long)onlylpLoadingMaxtime;
- (void)setOnlylpLoadingMaxtime:;
- (void)setStraightLpShowtime:;
- (void)setupDataWithDictionary:;
- (long long)straightLpShowtime;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setLoadingText:;
- (id)loadingText;
@end

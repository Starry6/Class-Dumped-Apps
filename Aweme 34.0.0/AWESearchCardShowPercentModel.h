@interface AWESearchCardShowPercentModel : NSObject
@property (nonatomic) double currShowPercent;
@property (nonatomic) double maxShowPercent;
@property (nonatomic) BOOL isCutOff;
@property (nonatomic) q rank;
- (BOOL)isCutOff;
- (double)currShowPercent;
- (double)maxShowPercent;
- (void)setMaxShowPercent:;
- (void)setCurrShowPercent:;
- (void)setIsCutOff:;
- (long long)rank;
- (void)setRank:;
@end

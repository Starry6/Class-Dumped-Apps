@interface BKEnrollPearlProgressInfo : NSObject
@property (nonatomic) q percentageCompleted;
@property (nonatomic) NSArray enrolledPoses;
- (id)dictionary;
- (void).cxx_destruct;
- (id)initFromDictionary:;
- (id)initWithPercents:;
- (id)initFromEnrollInfo:;
- (long long)percentageCompleted;
- (void)setPercentageCompleted:;
- (id)enrolledPoses;
- (void)setEnrolledPoses:;
@end

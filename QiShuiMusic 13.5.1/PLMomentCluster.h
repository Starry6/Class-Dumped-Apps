@interface PLMomentCluster : NSObject
@property (nonatomic) NSArray moments;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) NSDate localStartDate;
@property (nonatomic) NSDate localEndDate;
- (id)moments;
- (id)localEndDate;
- (id)startDate;
- (id)localStartDate;
- (id)initWithMoments:;
- (unsigned long long)hash;
- (id)endDate;
- (void).cxx_destruct;
- (BOOL)isEqual:;
@end

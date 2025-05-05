@interface TVLTransInfo : NSObject
@property (nonatomic) q PTS;
@property (nonatomic) NSDictionary rawData;
@property (nonatomic) q index;
@property (nonatomic) q checkedDTS;
@property (nonatomic) q sentFrames;
- (long long)PTS;
- (void)setPTS:;
- (long long)checkedDTS;
- (long long)sentFrames;
- (void)setRawData:;
- (long long)index;
- (void).cxx_destruct;
- (id)description;
- (id)rawData;
- (id)initWithRawData:;
+ (id)transInfoWithSEI:;
@end

@interface AWETimeRange : MTLModel
@property (nonatomic) NSNumber start;
@property (nonatomic) NSNumber duration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStart:;
- (void)setDuration:;
- (void).cxx_destruct;
- (id)duration;
- (id)CMTimeRangeValue;
- (id)start;
- (id)copyWithZone:;
- (id)initWithCMTimeRange:;
+ (id)timeRangeWithCMTimeRange:;
+ (id)JSONKeyPathsByPropertyKey;
@end

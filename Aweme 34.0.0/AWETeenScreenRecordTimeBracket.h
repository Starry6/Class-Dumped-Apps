@interface AWETeenScreenRecordTimeBracket : MTLModel
@property (nonatomic) q startTimeSec;
@property (nonatomic) q endTimeSec;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)startTimeSec;
- (void)setStartTimeSec:;
- (long long)endTimeSec;
- (void)setEndTimeSec:;
- (id)init;
- (void)encodeWithCoder:;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end

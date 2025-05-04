@interface AWEUGShowFrequencyModel : MTLModel
@property (nonatomic) q showTimeInterval;
@property (nonatomic) q showTimesInXSeconds;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShowTimeInterval:;
- (void)setShowTimesInXSeconds:;
- (long long)showTimeInterval;
- (long long)showTimesInXSeconds;
+ (id)JSONKeyPathsByPropertyKey;
@end

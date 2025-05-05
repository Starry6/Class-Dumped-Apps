@interface IESIMAnchorDisplayInfoModel : MTLModel
@property (nonatomic) q intevalTimes;
@property (nonatomic) q intevalSeconds;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)intevalSeconds;
- (long long)intevalTimes;
- (void)setIntevalSeconds:;
- (void)setIntevalTimes:;
+ (id)JSONKeyPathsByPropertyKey;
@end

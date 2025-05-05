@interface NormDataSource : NSObject
@property (nonatomic) Q numberOfFeatureChannels;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithChannel:epsilon:gamma:beta:;
- (id)beta;
- (id)label;
- (float)epsilon;
- (id)gamma;
- (id)copyWithZone:;
- (unsigned long long)numberOfFeatureChannels;
@end

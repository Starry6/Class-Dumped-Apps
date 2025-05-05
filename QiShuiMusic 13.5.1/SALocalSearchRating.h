@interface SALocalSearchRating : AceObject
@property (nonatomic) q count;
@property (nonatomic) double maxValue;
@property (nonatomic) NSString providerId;
@property (nonatomic) double value;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCount:;
- (id)groupIdentifier;
- (double)maxValue;
- (void)setValue:;
- (id)encodedClassName;
- (double)value;
- (long long)count;
- (void)setMaxValue:;
- (id)providerId;
- (void)setProviderId:;
+ (id)rating;
+ (id)ratingWithDictionary:context:;
@end

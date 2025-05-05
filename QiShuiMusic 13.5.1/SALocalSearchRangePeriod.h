@interface SALocalSearchRangePeriod : AceObject
@property (nonatomic) q endSecondsSinceMidnight;
@property (nonatomic) q startSecondsSinceMidnight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (long long)endSecondsSinceMidnight;
- (void)setEndSecondsSinceMidnight:;
- (long long)startSecondsSinceMidnight;
- (void)setStartSecondsSinceMidnight:;
+ (id)rangePeriod;
+ (id)rangePeriodWithDictionary:context:;
@end

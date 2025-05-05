@interface CNVCardReadingOptions : NSObject
@property (nonatomic) Q contactLimit;
@property (nonatomic) NSArray propertiesToFetch;
@property (nonatomic) Q maximumValueLength;
@property (nonatomic) BOOL useConcurrentParsing;
- (void)setPropertiesToFetch:;
- (id)propertiesToFetch;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)setMaximumValueLength:;
- (void)setContactLimit:;
- (unsigned long long)maximumValueLength;
- (unsigned long long)contactLimit;
- (BOOL)useConcurrentParsing;
- (void)setUseConcurrentParsing:;
@end

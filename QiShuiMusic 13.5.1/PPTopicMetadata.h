@interface PPTopicMetadata : NSObject
@property (nonatomic) S impressionCount;
@property (nonatomic) S occurrencesInSource;
@property (nonatomic) S algorithmResultPosition;
@property (nonatomic) S algorithmResultCount;
@property (nonatomic) BOOL exactMatchInSourceText;
@property (nonatomic) NSSet featureNames;
- (unsigned short)impressionCount;
- (id)init;
- (id)featureValueForName:;
- (id)initWithImpressionCount:occurrencesInSource:algorithmResultPosition:algorithmResultCount:exactMatchInSourceText:;
- (id)initWithCoder:;
- (unsigned short)algorithmResultPosition;
- (unsigned long long)hash;
- (unsigned short)occurrencesInSource;
- (id)featureNames;
- (void)encodeWithCoder:;
- (BOOL)exactMatchInSourceText;
- (id)description;
- (BOOL)isEqualToTopicMetadata:;
- (unsigned short)algorithmResultCount;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end

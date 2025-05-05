@interface WBSPhishingConfigurationOverride : NSObject
@property (nonatomic) NSRegularExpression expression;
@property (nonatomic) Q classification;
- (id)expression;
- (id)initWithDictionary:error:;
- (unsigned long long)classification;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithExpression:classification:error:;
@end

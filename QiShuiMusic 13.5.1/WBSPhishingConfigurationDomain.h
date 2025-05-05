@interface WBSPhishingConfigurationDomain : NSObject
@property (nonatomic) NSArray expressions;
- (id)initWithDictionary:error:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)matchesURL:;
- (id)expressions;
- (id)initWithExpressions:error:;
@end

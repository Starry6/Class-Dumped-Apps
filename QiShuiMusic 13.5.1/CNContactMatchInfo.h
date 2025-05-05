@interface CNContactMatchInfo : NSObject
@property (nonatomic) BOOL matchedNameProperty;
@property (nonatomic) NSNumber relevanceScore;
@property (nonatomic) NSDictionary matchedProperties;
@property (nonatomic) NSSet matchedTerms;
@property (nonatomic) CNPromise excerpt;
- (void)setRelevanceScore:;
- (id)excerpt;
- (id)initWithCoder:;
- (id)relevanceScore;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setExcerpt:;
- (id)copyWithZone:;
- (id)matchedProperties;
- (void)setMatchedProperties:;
- (id)matchedTerms;
- (void)setMatchedTerms:;
- (BOOL)matchedNameProperty;
- (void)setMatchedNameProperty:;
+ (BOOL)supportsSecureCoding;
@end

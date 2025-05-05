@interface MSParsecSearchSessionQueryComponent : NSObject
@property (nonatomic) NSString category;
@property (nonatomic) NSString scope;
@property (nonatomic) NSString queryString;
@property (nonatomic) BOOL cannedSuggestion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)scope;
- (void).cxx_destruct;
- (id)category;
- (id)queryString;
- (id)initWithCategory:scope:queryString:cannedSuggestion:;
- (id)_structuredQueryComponentWithLanguages:;
- (BOOL)cannedSuggestion;
+ (id)log;
+ (id)freeTextQueryComponentWithString:;
+ (id)suggestionAtomQueryComponentWithCategory:scope:queryString:cannedSuggestion:;
+ (id)_structuredQueryForComponents:hasCurrentMailboxScope:languages:;
@end

@interface SAARParaphrasedSuggestedResultsPod : SAAceView
@property (nonatomic) NSArray suggestedResults;
@property (nonatomic) NSString title;
- (id)groupIdentifier;
- (void)setTitle:;
- (id)title;
- (id)encodedClassName;
- (id)suggestedResults;
- (void)setSuggestedResults:;
+ (id)paraphrasedSuggestedResultsPod;
+ (id)paraphrasedSuggestedResultsPodWithDictionary:context:;
@end

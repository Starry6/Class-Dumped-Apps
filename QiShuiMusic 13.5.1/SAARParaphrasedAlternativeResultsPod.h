@interface SAARParaphrasedAlternativeResultsPod : SAAceView
@property (nonatomic) NSArray alternativeResultViews;
@property (nonatomic) NSString title;
- (id)groupIdentifier;
- (void)setTitle:;
- (id)title;
- (id)encodedClassName;
- (id)alternativeResultViews;
- (void)setAlternativeResultViews:;
+ (id)paraphrasedAlternativeResultsPod;
+ (id)paraphrasedAlternativeResultsPodWithDictionary:context:;
@end

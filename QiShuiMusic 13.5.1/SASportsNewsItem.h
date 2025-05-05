@interface SASportsNewsItem : AceObject
@property (nonatomic) NSURL link;
@property (nonatomic) NSString summary;
@property (nonatomic) NSString title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)link;
- (id)groupIdentifier;
- (void)setLink:;
- (void)setTitle:;
- (void)setSummary:;
- (id)summary;
- (id)title;
- (id)encodedClassName;
+ (id)newsItem;
+ (id)newsItemWithDictionary:context:;
@end

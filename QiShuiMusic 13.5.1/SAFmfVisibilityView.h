@interface SAFmfVisibilityView : SAUISnippet
@property (nonatomic) NSURL searchContext;
@property (nonatomic) BOOL visible;
- (void)setSearchContext:;
- (BOOL)visible;
- (void)setVisible:;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)searchContext;
+ (id)visibilityView;
+ (id)visibilityViewWithDictionary:context:;
@end

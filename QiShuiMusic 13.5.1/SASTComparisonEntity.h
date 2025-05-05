@interface SASTComparisonEntity : AceObject
@property (nonatomic) SAUIDecoratedText decoratedTitle;
@property (nonatomic) SAUIDecoratedText decoratedValue;
@property (nonatomic) SAUINanoImageResource imageResource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)imageResource;
- (void)setImageResource:;
- (id)decoratedTitle;
- (void)setDecoratedTitle:;
- (id)decoratedValue;
- (void)setDecoratedValue:;
+ (id)comparisonEntity;
+ (id)comparisonEntityWithDictionary:context:;
@end

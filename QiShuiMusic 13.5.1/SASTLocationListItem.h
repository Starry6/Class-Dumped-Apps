@interface SASTLocationListItem : AceObject
@property (nonatomic) <SASTTemplateAction> action;
@property (nonatomic) SAUIDecoratedText formattedDistance;
@property (nonatomic) SASTTemplateStarRating rating;
@property (nonatomic) SAUIDecoratedText subtitle;
@property (nonatomic) SAUIDecoratedText title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rating;
- (id)groupIdentifier;
- (id)action;
- (void)setSubtitle:;
- (void)setTitle:;
- (void)setAction:;
- (id)title;
- (id)encodedClassName;
- (id)subtitle;
- (void)setRating:;
- (id)formattedDistance;
- (void)setFormattedDistance:;
+ (id)locationListItem;
+ (id)locationListItemWithDictionary:context:;
@end

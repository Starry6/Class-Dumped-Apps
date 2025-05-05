@interface SASTTemplatePercentageRating : SASTTemplateRating
@property (nonatomic) SAUILocalImageResource localImageResource;
@property (nonatomic) SAUIDecoratedText value;
- (id)groupIdentifier;
- (void)setValue:;
- (id)encodedClassName;
- (id)value;
- (id)localImageResource;
- (void)setLocalImageResource:;
+ (id)templatePercentageRating;
+ (id)templatePercentageRatingWithDictionary:context:;
@end

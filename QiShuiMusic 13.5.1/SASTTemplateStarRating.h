@interface SASTTemplateStarRating : SASTTemplateRating
@property (nonatomic) double maximumValue;
@property (nonatomic) double value;
- (void)setMaximumValue:;
- (id)groupIdentifier;
- (double)maximumValue;
- (void)setValue:;
- (id)encodedClassName;
- (double)value;
+ (id)templateStarRating;
+ (id)templateStarRatingWithDictionary:context:;
@end

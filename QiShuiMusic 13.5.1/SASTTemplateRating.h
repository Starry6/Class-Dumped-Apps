@interface SASTTemplateRating : AceObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)templateRating;
+ (id)templateRatingWithDictionary:context:;
@end

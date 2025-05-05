@interface SASTTemplateContentRating : SASTTemplateRating
@property (nonatomic) NSString system;
@property (nonatomic) NSString value;
- (id)groupIdentifier;
- (id)system;
- (void)setValue:;
- (id)encodedClassName;
- (id)value;
- (void)setSystem:;
@end

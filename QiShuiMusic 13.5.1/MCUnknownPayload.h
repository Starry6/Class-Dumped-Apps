@interface MCUnknownPayload : MCPayload
- (id)verboseDescription;
- (id)initWithDictionary:profile:outError:;
- (id)subtitle1Description;
- (id)initWithContentsOfPayload:profile:;
+ (id)typeStrings;
@end

@interface SAWeatherTVObject : SAWeatherAbstractObject
@property (nonatomic) NSString view;
- (id)groupIdentifier;
- (id)view;
- (id)encodedClassName;
- (void)setView:;
+ (id)tVObject;
+ (id)tVObjectWithDictionary:context:;
@end

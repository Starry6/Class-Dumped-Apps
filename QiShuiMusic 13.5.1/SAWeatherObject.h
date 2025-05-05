@interface SAWeatherObject : SAWeatherAbstractObject
@property (nonatomic) NSString view;
- (id)groupIdentifier;
- (id)view;
- (id)encodedClassName;
- (void)setView:;
+ (id)object;
+ (id)objectWithDictionary:context:;
@end

@interface SAStockNews : SADomainObject
@property (nonatomic) NSDate timeStamp;
@property (nonatomic) NSString title;
@property (nonatomic) NSString url;
- (id)url;
- (id)groupIdentifier;
- (void)setTitle:;
- (void)setUrl:;
- (id)title;
- (id)encodedClassName;
- (id)timeStamp;
- (void)setTimeStamp:;
+ (id)news;
+ (id)newsWithDictionary:context:;
@end

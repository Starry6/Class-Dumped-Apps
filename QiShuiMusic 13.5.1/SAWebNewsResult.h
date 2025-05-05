@interface SAWebNewsResult : SAWebWebResult
@property (nonatomic) NSDate publicationDate;
@property (nonatomic) NSString source;
- (id)groupIdentifier;
- (void)setPublicationDate:;
- (id)publicationDate;
- (id)encodedClassName;
- (id)source;
- (void)setSource:;
+ (id)newsResult;
+ (id)newsResultWithDictionary:context:;
@end

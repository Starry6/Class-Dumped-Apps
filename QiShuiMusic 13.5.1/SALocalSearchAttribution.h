@interface SALocalSearchAttribution : AceObject
@property (nonatomic) NSString attributionId;
@property (nonatomic) NSArray urls;
@property (nonatomic) q version;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)urls;
- (id)groupIdentifier;
- (void)setVersion:;
- (long long)version;
- (void)setUrls:;
- (id)encodedClassName;
- (id)attributionId;
- (void)setAttributionId:;
+ (id)attribution;
+ (id)attributionWithDictionary:context:;
@end

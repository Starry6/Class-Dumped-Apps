@interface SAUIURLData : AceObject
@property (nonatomic) NSData data;
@property (nonatomic) NSURL uri;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)uri;
- (id)groupIdentifier;
- (id)data;
- (id)encodedClassName;
- (void)setData:;
- (void)setUri:;
+ (id)uRLData;
+ (id)uRLDataWithDictionary:context:;
@end

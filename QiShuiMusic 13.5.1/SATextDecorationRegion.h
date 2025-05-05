@interface SATextDecorationRegion : AceObject
@property (nonatomic) NSNumber length;
@property (nonatomic) NSString property;
@property (nonatomic) NSNumber start;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setProperty:;
- (void)setStart:;
- (id)groupIdentifier;
- (id)property;
- (id)start;
- (id)encodedClassName;
- (id)length;
- (void)setLength:;
+ (id)textDecorationRegion;
+ (id)textDecorationRegionWithDictionary:context:;
@end

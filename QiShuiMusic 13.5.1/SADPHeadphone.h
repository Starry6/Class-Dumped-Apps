@interface SADPHeadphone : SADPDeviceDetail
@property (nonatomic) BOOL inOrOverEar;
@property (nonatomic) NSString position;
- (void)setPosition:;
- (id)position;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)inOrOverEar;
- (void)setInOrOverEar:;
+ (id)headphone;
+ (id)headphoneWithDictionary:context:;
@end

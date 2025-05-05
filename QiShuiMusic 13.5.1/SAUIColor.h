@interface SAUIColor : AceObject
@property (nonatomic) NSNumber alpha;
@property (nonatomic) q blueValue;
@property (nonatomic) q greenValue;
@property (nonatomic) q redValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setAlpha:;
- (void)setRedValue:;
- (void)setGreenValue:;
- (id)alpha;
- (long long)greenValue;
- (id)encodedClassName;
- (long long)redValue;
- (void)setBlueValue:;
- (long long)blueValue;
+ (id)color;
+ (id)colorWithDictionary:context:;
@end

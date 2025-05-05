@interface ARParametricLights : NSObject
@property (nonatomic)  ambientColor;
@property (nonatomic) NSArray areaLights;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithAmbientColor:areaLights:;
- (id)ambientColor;
- (id)areaLights;
+ (BOOL)supportsSecureCoding;
@end

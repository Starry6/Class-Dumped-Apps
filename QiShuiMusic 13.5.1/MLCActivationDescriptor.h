@interface MLCActivationDescriptor : NSObject
@property (nonatomic) NSInteger activationType;
@property (nonatomic) float a;
@property (nonatomic) float b;
@property (nonatomic) float c;
- (float)b;
- (float)a;
- (id)initWithType:a:b:c:;
- (unsigned long long)hash;
- (float)c;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (int)activationType;
+ (id)descriptorWithType:;
+ (id)descriptorWithType:a:;
+ (id)descriptorWithType:a:b:;
+ (id)defaultParametersForType:;
+ (id)descriptorWithType:a:b:c:;
@end

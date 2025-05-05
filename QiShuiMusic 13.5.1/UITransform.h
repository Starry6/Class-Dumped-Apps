@interface UITransform : NSObject
@property (nonatomic) {CGAffineTransform=dddddd} transform;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)succinctDescriptionBuilder;
- (unsigned long long)hash;
- (id)transform;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
- (id)_initWithTransform:;
+ (id)identity;
+ (id)transformWithCGAffineTransform:;
+ (id)rotationWithDegrees:;
+ (id)rotationWithRadians:;
+ (id)translation:;
+ (id)scaleX:scaleY:;
+ (id)scale:;
@end

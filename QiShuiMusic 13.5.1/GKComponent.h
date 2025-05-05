@interface GKComponent : NSObject
@property (nonatomic) BOOL usesPerComponentUpdate;
@property (nonatomic) GKComponentSystem componentSystem;
@property (nonatomic) NSString componentName;
@property (nonatomic) GKEntity entity;
- (id)componentName;
- (void)setEntity:;
- (id)entity;
- (id)init;
- (id)copy;
- (id)initWithName:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setComponentName:;
- (void)updateWithDeltaTime:;
- (void)didAddToEntity;
- (void)willRemoveFromEntity;
- (BOOL)usesPerComponentUpdate;
- (void)setUsesPerComponentUpdate:;
- (void)setComponentSystem:;
- (id)componentSystem;
+ (BOOL)supportsSecureCoding;
@end

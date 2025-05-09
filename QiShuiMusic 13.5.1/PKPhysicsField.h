@interface PKPhysicsField : NSObject
@property (nonatomic) float strength;
@property (nonatomic) float falloff;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL override;
@property (nonatomic) @ region;
@property (nonatomic)  direction;
@property (nonatomic) I categoryBitMask;
@property (nonatomic)  position;
@property (nonatomic) float rotation;
@property (nonatomic)  scale;
@property (nonatomic) float minimumRadius;
@property (nonatomic) <NSObject> representedObject;
- (void)setPosition:;
- (id)direction;
- (float)strength;
- (id)position;
- (id)init;
- (void)setDirection:;
- (void)dealloc;
- (void)setRegion:;
- (void)setStrength:;
- (void)setScale:;
- (id)region;
- (float)minimumRadius;
- (void)setRotation:;
- (void)setMinimumRadius:;
- (BOOL)override;
- (void)setEnabled:;
- (void).cxx_destruct;
- (void)setOverride:;
- (float)rotation;
- (void)setActive:;
- (id)scale;
- (id).cxx_construct;
- (BOOL)isActive;
- (BOOL)isEnabled;
- (unsigned int)categoryBitMask;
- (void)setCategoryBitMask:;
- (id)representedObject;
- (void)setRepresentedObject:;
- (id)_field;
- (void)setFalloff:;
- (float)falloff;
- (BOOL)isOverride;
- (void)setIsOverride:;
- (void)set_field:;
@end

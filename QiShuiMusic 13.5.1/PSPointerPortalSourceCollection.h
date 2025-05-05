@interface PSPointerPortalSourceCollection : NSObject
@property (nonatomic) I sourceContextID;
@property (nonatomic) BOOL shouldBeInvalidatedIfPointerLeavesDisplay;
@property (nonatomic) PSPortalSource overlayEffectPortalSource;
@property (nonatomic) PSPortalSource pointerPortalSource;
@property (nonatomic) PSMatchMoveSource samplingMatchMoveSource;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned int)sourceContextID;
- (id)pointerPortalSource;
- (id)samplingMatchMoveSource;
- (id)overlayEffectPortalSource;
- (BOOL)shouldBeInvalidatedIfPointerLeavesDisplay;
- (void)setShouldBeInvalidatedIfPointerLeavesDisplay:;
- (id)initWithPointerPortalSource:overlayEffectPortalSource:samplingMatchMoveSource:;
+ (BOOL)supportsSecureCoding;
@end

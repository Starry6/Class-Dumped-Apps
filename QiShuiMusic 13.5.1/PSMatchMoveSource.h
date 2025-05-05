@interface PSMatchMoveSource : NSObject
@property (nonatomic) BOOL shouldBeInvalidatedIfPointerLeavesDisplay;
@property (nonatomic) Q sourceLayerRenderID;
@property (nonatomic) I sourceContextID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)sourceLayerRenderID;
- (unsigned int)sourceContextID;
- (id)initWithSourceContextID:sourceLayerRenderID:;
- (BOOL)shouldBeInvalidatedIfPointerLeavesDisplay;
- (void)setShouldBeInvalidatedIfPointerLeavesDisplay:;
+ (BOOL)supportsSecureCoding;
@end

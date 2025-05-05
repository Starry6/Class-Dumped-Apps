@interface NSCollectionLayoutAnchor : NSObject
@property (nonatomic) Q edges;
@property (nonatomic) {CGPoint=dd} offset;
@property (nonatomic) {CGPoint=dd} anchorPoint;
@property (nonatomic) BOOL offsetIsUnitOffset;
@property (nonatomic) BOOL isAbsoluteOffset;
@property (nonatomic) BOOL isFractionalOffset;
- (void)setOffset:;
- (BOOL)isFractionalOffset;
- (BOOL)offsetIsUnitOffset;
- (void)setEdges:;
- (void)setOffsetIsUnitOffset:;
- (id)anchorPoint;
- (id)offset;
- (id)initWithEdges:offset:anchorPoint:offsetIsUnitOffset:;
- (BOOL)isAbsoluteOffset;
- (id)description;
- (unsigned long long)edges;
- (void)setAnchorPoint:;
- (id)_itemFrameForContainerRect:itemSize:itemLayoutAnchor:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)layoutAnchorWithAnchorPoint:;
+ (id)layoutAnchorWithEdges:fractionalOffset:;
+ (id)layoutAnchorWithEdges:absoluteOffset:;
+ (id)layoutAnchorWithAnchorPoint:offset:;
+ (id)layoutAnchorWithEdges:;
+ (id)layoutAnchorWithAnchorPoint:unitOffset:;
@end

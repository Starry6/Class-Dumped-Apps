@interface FigCaptureSemanticStyleSet : NSObject
@property (nonatomic) NSArray semanticStyles;
@property (nonatomic) NSArray regions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (void)dealloc;
- (id)regions;
- (id)copyXPCEncoding;
- (id)regionAtIndex:;
- (id)description;
- (id)semanticStyles;
- (id)copyWithZone:;
- (float)leftmostRegionStartXOffset;
- (id)largestRegionSemanticStyle;
- (float)largestEdgeOffset;
+ (id)semanticStyleSetWithSemanticStyles:regions:;
@end

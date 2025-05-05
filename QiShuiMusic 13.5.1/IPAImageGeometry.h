@interface IPAImageGeometry : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)extent;
- (id)identifier;
- (void).cxx_destruct;
- (id)description;
- (id)domain;
- (id).cxx_construct;
- (id)imageQuad;
- (id)initWithIdentifier:extent:imageQuad:;
- (id)initWithIdentifier:extent:domain:;
- (id)initWithIdentifier:extent:;
+ (id)inputGeometryWithImageSize:;
+ (void)clearScene:;
+ (void)addRect:withLabel:toScene:;
+ (void)addQuadV0:V1:V2:V3:withLabel:toScene:;
+ (void)addPoint:radius:withLabel:toScene:;
+ (void)addLineFromP0:P1:withLabel:toScene:;
@end

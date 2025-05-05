@interface AXBrailleMap : NSObject
@property (nonatomic) {CGSize=dd} dimensions;
- (id)dimensions;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (void)setHeight:atPoint:;
- (void)setDimensions:;
- (float)heightAtPoint:;
- (void)presentImage:;
- (id)presentedImage;
+ (BOOL)supportsSecureCoding;
+ (id)connectedBrailleMap;
@end

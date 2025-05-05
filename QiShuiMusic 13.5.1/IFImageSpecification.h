@interface IFImageSpecification : NSObject
@property (nonatomic) IFImageSpecification smallerSpecification;
@property (nonatomic) IFImageSpecification largerSpecification;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) double scale;
@property (nonatomic) {CGSize=dd} pixelsSize;
@property (nonatomic) NSSet tags;
- (id)pixelSize;
- (id)tags;
- (BOOL)isEqualToImageSpecification:;
- (id)largerSpecification;
- (double)dimension;
- (id)pixelsSize;
- (id)initWithSize:scale:tags:;
- (void)setLargerSpecification:;
- (id)smallerSpecification;
- (unsigned long long)hash;
- (id)minimumSize;
- (void).cxx_destruct;
- (id)description;
- (void)setSmallerSpecification:;
- (double)scale;
- (BOOL)isEqual:;
- (id)size;
@end

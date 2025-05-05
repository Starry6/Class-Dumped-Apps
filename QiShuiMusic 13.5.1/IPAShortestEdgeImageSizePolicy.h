@interface IPAShortestEdgeImageSizePolicy : IPAImageSizePolicy
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)transformSize:;
- (BOOL)isBestFitPolicy;
- (id)initWithShortestEdge:;
@end

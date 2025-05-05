@interface BDREStringCmpGraphNode : BDREGraphNode
@property (nonatomic) NSArray comparedStrs;
- (BOOL)canPassWithFootPrint:;
- (BOOL)compareStrA:strB:;
- (id)comparedStrs;
- (id)initWithComparedStrs:;
- (void)setComparedStrs:;
- (void)visitWithFootPrint:previousNode:;
- (void).cxx_destruct;
@end

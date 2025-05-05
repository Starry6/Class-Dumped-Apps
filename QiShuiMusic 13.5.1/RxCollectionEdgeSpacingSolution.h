@interface RxCollectionEdgeSpacingSolution : NSObject
@property (nonatomic) BOOL flexible;
@property (nonatomic) double spacing;
- (BOOL)isFlexible;
- (double)spacing;
- (void)setSpacing:;
- (id)initWithSpacing:isFlexible:;
@end

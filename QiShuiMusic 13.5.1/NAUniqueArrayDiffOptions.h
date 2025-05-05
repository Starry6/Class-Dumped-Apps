@interface NAUniqueArrayDiffOptions : NSObject
@property (nonatomic) @? equalComparator;
@property (nonatomic) @? hashGenerator;
@property (nonatomic) @? changeComparator;
@property (nonatomic) BOOL allowMoves;
- (id)init;
- (void).cxx_destruct;
- (id)equalComparator;
- (void)setEqualComparator:;
- (id)hashGenerator;
- (void)setHashGenerator:;
- (id)changeComparator;
- (void)setChangeComparator:;
- (BOOL)allowMoves;
- (void)setAllowMoves:;
@end

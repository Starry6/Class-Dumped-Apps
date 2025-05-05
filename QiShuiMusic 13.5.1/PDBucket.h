@interface PDBucket : NSObject
@property (nonatomic) double lowerInclusiveBound;
@property (nonatomic) double upperBound;
@property (nonatomic) BOOL hasInclusiveUpperBound;
@property (nonatomic) Q count;
@property (nonatomic) NSString label;
@property (nonatomic) double lowerInclusiveBound;
@property (nonatomic) double upperBound;
@property (nonatomic) BOOL hasInclusiveUpperBound;
@property (nonatomic) Q count;
@property (nonatomic) NSString label;
- (void)setCount:;
- (id)initWithDictionary:error:;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (unsigned long long)count;
- (double)upperBound;
- (void)setUpperBound:;
- (double)lowerInclusiveBound;
- (BOOL)hasInclusiveUpperBound;
- (void)setLowerInclusiveBound:;
- (void)setHasInclusiveUpperBound:;
@end

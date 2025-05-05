@interface CHCutPoint : NSObject
@property (nonatomic) q strokeIndex;
@property (nonatomic) q pointIndex;
@property (nonatomic) BOOL isEndOfStroke;
- (unsigned long long)hash;
- (long long)compare:;
- (BOOL)isEqual:;
- (long long)pointIndex;
- (id)initWithStrokeIndex:pointIndex:isEndOfStroke:;
- (BOOL)isStartOfStroke;
- (long long)strokeIndex;
- (BOOL)isEndOfStroke;
+ (id)sortedCHCutPointArray:;
@end

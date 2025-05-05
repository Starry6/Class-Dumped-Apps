@interface VCPMovieCurationResults : NSObject
@property (nonatomic) PHAsset phAsset;
@property (nonatomic) NSMutableArray highlights;
@property (nonatomic) NSMutableDictionary results;
- (id)results;
- (void).cxx_destruct;
- (id)highlights;
- (void)setResults:;
- (id)phAsset;
- (id)initWithPHAsset:;
@end

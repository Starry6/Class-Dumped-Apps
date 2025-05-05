@interface ETImageFolderDataProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)dataPointAtIndex:error:;
- (unsigned long long)numberOfDataPoints;
- (void)prepareForEpoch;
- (id)initWithFolder:forImageTensor:andLabelTensor:shuffleBeforeEachEpoch:shuffleRandomSeed:withImagePreprocessParams:;
@end

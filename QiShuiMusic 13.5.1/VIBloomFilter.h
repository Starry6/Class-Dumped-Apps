@interface VIBloomFilter : NSObject
@property (nonatomic) I seed;
@property (nonatomic) Q numberOfBits;
@property (nonatomic) I numberOfHashes;
@property (nonatomic) I numberOfAddedItems;
- (unsigned int)seed;
- (void)addItem:;
- (id)data;
- (BOOL)containsItem:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)numberOfBits;
- (id)initWithNumberOfHashes:numberOfBits:seed:;
- (id)initWithData:numberOfHashes:numberOfBits:seed:error:;
- (unsigned int)numberOfHashes;
- (unsigned int)numberOfAddedItems;
@end

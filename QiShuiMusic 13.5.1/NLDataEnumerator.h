@interface NLDataEnumerator : NSObject
@property (nonatomic) NLDataProvider dataProvider;
@property (nonatomic) Q index;
- (id)initWithDataProvider:;
- (id)dataProvider;
- (id)nextInstance;
- (unsigned long long)index;
- (void).cxx_destruct;
- (void)shuffle;
- (id)instanceAtIndex:;
- (id)initWithDataProvider:numberGenerator:;
- (void)rewind;
- (void)rewindAndShuffle:;
@end

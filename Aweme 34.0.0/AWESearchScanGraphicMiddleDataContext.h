@interface AWESearchScanGraphicMiddleDataContext : NSObject
@property (nonatomic) UIImage searchImage;
@property (nonatomic) NSString searchText;
@property (nonatomic) NSArray guessWords;
@property (nonatomic) NSDictionary params;
@property (nonatomic) AWESearchScanSuggestWordModel currentSearchBoxSuggestWord;
- (id)guessWords;
- (id)searchImage;
- (void)setSearchImage:;
- (void)setGuessWords:;
- (id)currentSearchBoxSuggestWord;
- (void)setCurrentSearchBoxSuggestWord:;
- (void).cxx_destruct;
- (void)setSearchText:;
- (id)params;
- (id)searchText;
- (void)setParams:;
@end

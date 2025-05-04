@interface AWESearchExtraParamsUtility : NSObject
@property (nonatomic) NSString initialSearchSource;
@property (nonatomic) NSString initialSearcKeyword;
@property (nonatomic) NSString initialGeneralSearchId;
@property (nonatomic) NSString preGeneralSearchId;
@property (nonatomic) <AWESearchResultVCProtocol> searchResultViewController;
- (void)setInitialSearchSource:;
- (id)initialSearchSource;
- (id)fetchAllExtraParams;
- (id)initialSearcKeyword;
- (void)setInitialSearcKeyword:;
- (id)initialGeneralSearchId;
- (void)setInitialGeneralSearchId:;
- (id)preGeneralSearchId;
- (void)setPreGeneralSearchId:;
- (id)fetchUserExtraParams;
- (id)fetchGeneralExtraParams;
- (void)resetParams;
- (id)searchResultViewController;
- (void)setSearchResultViewController:;
- (void).cxx_destruct;
@end

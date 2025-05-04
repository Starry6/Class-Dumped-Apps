@interface AWEUltraCreationTokenManager : NSObject
@property (nonatomic) NSString curToken;
@property (nonatomic) q curPage;
@property (nonatomic) NSMutableDictionary pageMap;
@property (nonatomic) NSMutableDictionary tokenMap;
@property (nonatomic) NSString curRequestId;
@property (nonatomic) NSArray pages;
- (long long)curPage;
- (void)setCurPage:;
- (void)configPages:initialToken:;
- (long long)quitPageWithToken:;
- (long long)nextPageWithCurrentToken:;
- (void)setCurrentPage:token:;
- (void)setPageMap:;
- (void)setTokenMap:;
- (void)configPage:token:;
- (id)pageMap;
- (void)setCurToken:;
- (id)curToken;
- (id)curRequestId;
- (void)setCurRequestId:;
- (void).cxx_destruct;
- (id)pages;
- (void)setPages:;
- (id)tokenMap;
- (BOOL)containsToken:;
@end

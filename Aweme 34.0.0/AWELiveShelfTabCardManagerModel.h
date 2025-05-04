@interface AWELiveShelfTabCardManagerModel : NSObject
@property (nonatomic) q tabId;
@property (nonatomic) q total;
@property (nonatomic) q offset;
@property (nonatomic) q preOffset;
@property (nonatomic) q realOffset;
@property (nonatomic) q realNextOffset;
@property (nonatomic) NSArray cardList;
- (id)cardList;
- (long long)realOffset;
- (void)setRealOffset:;
- (void)setCardList:;
- (long long)preOffset;
- (void)setPreOffset:;
- (long long)realNextOffset;
- (void)updatePartCardList:;
- (void)setRealNextOffset:;
- (void)setOffset:;
- (long long)offset;
- (void).cxx_destruct;
- (long long)total;
- (void)setTotal:;
- (void)setTabId:;
- (long long)tabId;
@end

@interface IESECRelationSearchContext : NSObject
@property (nonatomic) NSNumber shopVersion;
@property (nonatomic) IESECRelationSearchEnterParams enterParams;
@property (nonatomic) IESECShopContext shopContext;
@property (nonatomic) Q recentSearchType;
@property (nonatomic) NSString inboundSearchKeyword;
@property (nonatomic) NSString sourceBtmToken;
- (void)setEnterParams:;
- (void)setShopVersion:;
- (void)setShopContext:;
- (id)enterParams;
- (id)inboundSearchKeyword;
- (unsigned long long)recentSearchType;
- (void)setInboundSearchKeyword:;
- (void)setRecentSearchType:;
- (void)setSourceBtmToken:;
- (id)shopContext;
- (id)shopVersion;
- (id)sourceBtmToken;
- (void).cxx_destruct;
@end

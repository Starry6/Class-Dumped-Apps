@interface IESECShopMomentsResponse : IESECBaseApiModel
@property (nonatomic) IESECListKitListModel hybridList;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) Q cursor;
- (id)hybridList;
- (id)logExtra;
- (void)setHybridList:;
- (void)setLogExtra:;
- (unsigned long long)cursor;
- (void)setHasMore:;
- (void)setCursor:;
- (void).cxx_destruct;
- (BOOL)hasMore;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface IESECWinInsertCardsApi : NSObject
@property (nonatomic) NSDictionary insertCardsParams;
@property (nonatomic) NSString productId;
@property (nonatomic) NSString filterPids;
@property (nonatomic) NSString secAuthorId;
@property (nonatomic) Q cardType;
@property (nonatomic) NSString apiHost;
@property (nonatomic) NSString apiPath;
@property (nonatomic) # modelClass;
- (id)apiHost;
- (void)setSecAuthorId:;
- (id)apiPath;
- (void)fetchWinInsertCardsWithCompletion:;
- (id)filterPids;
- (id)insertCardsParams;
- (id)secAuthorId;
- (void)setApiHost:;
- (void)setApiPath:;
- (void)setFilterPids:;
- (void)setInsertCardsParams:;
- (id)productId;
- (Class)modelClass;
- (void)setModelClass:;
- (void).cxx_destruct;
- (unsigned long long)cardType;
- (void)setCardType:;
- (void)setProductId:;
@end

@interface AWEEcomSearchTradeBoardManager : NSObject
@property (nonatomic) NSMutableDictionary cacheDict;
- (void)setCacheDict:;
- (void)fetchTradeBoardURLWithEnterFrom:completion:;
- (id)getContextWithEnterFrom:;
- (id)validateEnterFrom:;
- (id)parseResponse:error:enterFrom:;
- (id)createContextWithLink:;
- (void).cxx_destruct;
- (id)cacheDict;
+ (id)shareInstance;
@end

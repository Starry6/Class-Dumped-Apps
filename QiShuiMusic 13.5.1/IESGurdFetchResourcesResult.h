@interface IESGurdFetchResourcesResult : NSObject
@property (nonatomic) BOOL succeed;
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSDictionary statusDictionary;
- (id)statusDictionary;
- (void).cxx_destruct;
- (id)accessKey;
- (void)setAccessKey:;
- (void)setStatusDictionary:;
- (BOOL)succeed;
- (void)setSucceed:;
@end

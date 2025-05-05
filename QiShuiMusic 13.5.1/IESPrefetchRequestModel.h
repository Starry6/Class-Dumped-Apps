@interface IESPrefetchRequestModel : NSObject
@property (nonatomic) NSString url;
@property (nonatomic) NSString method;
@property (nonatomic) NSString occasion;
@property (nonatomic) q expires;
@property (nonatomic) NSDictionary headers;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSDictionary data;
- (id)occasion;
- (void)setOccasion:;
- (id)url;
- (id)data;
- (id)initWithDictionary:;
- (id)method;
- (long long)expires;
- (void)setHeaders:;
- (void)setUrl:;
- (void).cxx_destruct;
- (void)setExpires:;
- (void)setData:;
- (void)setMethod:;
- (id)headers;
- (id)params;
- (void)setParams:;
@end

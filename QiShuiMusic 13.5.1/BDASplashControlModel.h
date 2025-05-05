@interface BDASplashControlModel : NSObject
@property (nonatomic) q platform;
@property (nonatomic) q action;
@property (nonatomic) NSArray cids;
@property (nonatomic) NSArray clearCaches;
@property (nonatomic) NSString logExtra;
- (void)setClearCaches:;
- (id)cids;
- (id)logExtra;
- (void)setCids:;
- (void)setLogExtra:;
- (id)clearCaches;
- (void)setPlatform:;
- (id)initWithDictionary:;
- (long long)action;
- (void)setAction:;
- (long long)platform;
- (void).cxx_destruct;
@end

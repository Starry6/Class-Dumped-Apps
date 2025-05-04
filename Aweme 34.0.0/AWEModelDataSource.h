@interface AWEModelDataSource : NSObject
@property (nonatomic) NSArray models;
@property (nonatomic) q fromIndex;
@property (nonatomic) NSString referString;
- (id)referString;
- (void)setReferString:;
- (void)setModels:;
- (void).cxx_destruct;
- (id)models;
- (long long)fromIndex;
- (void)setFromIndex:;
@end

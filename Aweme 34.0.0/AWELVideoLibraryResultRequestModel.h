@interface AWELVideoLibraryResultRequestModel : NSObject
@property (nonatomic) NSString searchKey;
@property (nonatomic) Q limit;
@property (nonatomic) Q offset;
@property (nonatomic) Q miniappOffset;
- (id)searchKey;
- (void)setSearchKey:;
- (unsigned long long)miniappOffset;
- (void)setMiniappOffset:;
- (unsigned long long)limit;
- (void)setLimit:;
- (void)setOffset:;
- (unsigned long long)offset;
- (void).cxx_destruct;
@end

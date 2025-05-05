@interface BXNetworkCenterOC : NSObject
@property (nonatomic) NSString baseUrl;
- (int)downloadFile:dir:fileName:;
- (void)initNetworkCenter:;
- (id)init;
- (void)setBaseUrl:;
- (id)baseUrl;
- (void).cxx_destruct;
- (id).cxx_construct;
+ (id)sharedInstace;
@end

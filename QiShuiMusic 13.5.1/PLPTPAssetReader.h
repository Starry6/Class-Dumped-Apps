@interface PLPTPAssetReader : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) @ userInfo;
- (id)path;
- (void)dealloc;
- (id)userInfo;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)initWithPath:;
- (id)description;
- (id)initWithTemporaryFileDeletedOnDeallocPath:;
- (id)dataSourcePathForDataRange:error:;
@end

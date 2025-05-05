@interface CKDSStorageFile : NSObject
@property (nonatomic) NSURL URL;
@property (nonatomic) BOOL isOwned;
- (void)dealloc;
- (void).cxx_destruct;
- (id)URL;
- (BOOL)isOwned;
- (id)initWithURL:isOwned:;
@end

@interface AWEPlaylistCreateConfig : NSObject
@property (nonatomic) BOOL enablePrivateCreate;
@property (nonatomic) NSString title;
@property (nonatomic) NSString completionButtonTitle;
@property (nonatomic) BOOL isMiniLuna;
@property (nonatomic) @? completionBlock;
@property (nonatomic) @? cancelBlock;
@property (nonatomic) @? errorBlock;
- (BOOL)isMiniLuna;
- (void)setIsMiniLuna:;
- (void)setEnablePrivateCreate:;
- (BOOL)enablePrivateCreate;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void)setCancelBlock:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)cancelBlock;
- (id)errorBlock;
- (void)setErrorBlock:;
- (id)completionButtonTitle;
- (void)setCompletionButtonTitle:;
@end

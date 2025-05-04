@interface AWEBDUploadRoutClientDelegate : NSObject
@property (nonatomic) @? routUploadVideoBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)uploadVideo:videoContextType:speed:videoContext:error:;
- (long long)netWorkRoutGetNetState:;
- (void)setRoutUploadVideoBlock:;
- (id)routUploadVideoBlock;
- (id)initWithBlock:;
- (void).cxx_destruct;
@end

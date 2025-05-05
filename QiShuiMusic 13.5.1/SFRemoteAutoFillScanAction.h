@interface SFRemoteAutoFillScanAction : NSObject
@property (nonatomic) NSString message;
@property (nonatomic) NSString title;
@property (nonatomic) NSURL url;
- (void)performWithCompletion:;
- (id)url;
- (void)setMessage:;
- (void)setTitle:;
- (void)setUrl:;
- (id)title;
- (id)message;
- (void).cxx_destruct;
+ (void)actionForURL:completion:;
@end

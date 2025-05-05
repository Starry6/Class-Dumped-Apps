@interface QLFilePreviewRequest : NSObject
@property (nonatomic) UTType contentType;
@property (nonatomic) NSURL fileURL;
- (void)setContentType:;
- (id)initWithURL:;
- (id)contentType;
- (void).cxx_destruct;
- (id)fileURL;
- (id)initWithURL:contentType:;
@end

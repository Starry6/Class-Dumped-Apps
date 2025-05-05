@interface DCPDFGenerator : NSObject
@property (nonatomic) NSURL fileURL;
@property (nonatomic) NSString title;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} pageRect;
@property (nonatomic) NSMutableData data;
@property (nonatomic) NSURL url;
- (void)setFileURL:;
- (id)url;
- (id)init;
- (void)dealloc;
- (id)data;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)fileURL;
- (void)setData:;
- (void)addPageWithRenderBlock:;
- (void)finishGenerating;
- (BOOL)startGenerating;
- (id)initWithMutableData:pageRect:title:;
- (id)initWithURL:pageRect:title:;
- (void)addPageWithPageRect:renderBlock:;
- (id)pageRect;
- (void)setPageRect:;
@end

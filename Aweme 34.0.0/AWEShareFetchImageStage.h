@interface AWEShareFetchImageStage : AWEShareBaseStage
@property (nonatomic) NSURL imageURL;
- (BOOL)prepareBeforeRun;
- (void)run;
- (id)initWithURL:;
- (id)imageURL;
- (void).cxx_destruct;
- (void)setImageURL:;
- (BOOL)shouldRun;
@end

@interface AWEIMShareContentWithTextChannel : AWEShareBaseChannel
@property (nonatomic) <AWEIMShareModelProtocol> shareModel;
- (void)shareWithCompletion:;
- (id)shareModelWithContext:;
- (unsigned long long)p_aweResultWithIMResult:;
- (void).cxx_destruct;
- (BOOL)prepareWithContext:;
- (void)setShareModel:;
- (id)shareModel;
@end

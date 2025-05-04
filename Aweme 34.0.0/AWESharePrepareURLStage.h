@interface AWESharePrepareURLStage : AWEShareBaseStage
- (id)aAWESharePrepareURLStageCommonAdapter;
- (void)updateContextWithShortURL:compeletion:;
- (BOOL)shouldShortenURL;
- (void)trackLinkCheckWithResult:;
- (BOOL)isOverseaCopyChannel;
- (BOOL)shouldFormatLinkString;
- (void)run;
- (BOOL)shouldRun;
+ (Class)aAWESharePrepareURLStageCommonAdapterClass;
@end

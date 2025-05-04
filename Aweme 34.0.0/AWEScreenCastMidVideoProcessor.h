@interface AWEScreenCastMidVideoProcessor : NSObject
@property (nonatomic) NSArray castVideoInfos;
@property (nonatomic) <AWEScreenCastProcessorDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canContinuePlay;
- (void)prefetchPlayItemWithModel:;
- (void)fetchPlayItemWithModel:withCompletion:;
- (id)filterUnSupportedModelsWith:;
- (BOOL)supportPreRedirect;
- (id)castVideoInfos;
- (id)getFirstPlayItemFromModel:videoInfo:;
- (void)fetchScreenCastVideoInfoWithList:completion:;
- (void)appendCastVideoInfos:;
- (void)trackGetPlayInfoFailed:videoID:;
- (id)transformCastPlayItemFromModel:videoInfo:;
- (void)setCastVideoInfos:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end

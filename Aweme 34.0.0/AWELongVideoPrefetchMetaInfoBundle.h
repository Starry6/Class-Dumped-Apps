@interface AWELongVideoPrefetchMetaInfoBundle : NSObject
@property (nonatomic) <AWEHttpTask> requestMetaInfoTask;
@property (nonatomic) AWELongVideoAlbumModel responseModel;
@property (nonatomic) NSError responseError;
@property (nonatomic) @? completionBlock;
@property (nonatomic) NSString albumID;
@property (nonatomic) q requestFrom;
@property (nonatomic) BOOL isFromTheater;
- (void)setAlbumID:;
- (BOOL)shouldReuseForAlbumID:isFromTheater:requestFrom:;
- (id)requestMetaInfoTask;
- (void)setRequestMetaInfoTask:;
- (void)setIsFromTheater:;
- (void)setRequestFrom:;
- (BOOL)isString:sameWith:;
- (BOOL)isFromTheater;
- (long long)requestFrom;
- (id)responseError;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void).cxx_destruct;
- (void)setResponseError:;
- (id)albumID;
- (id)responseModel;
- (void)setResponseModel:;
@end

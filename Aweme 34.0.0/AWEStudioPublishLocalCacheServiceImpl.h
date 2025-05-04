@interface AWEStudioPublishLocalCacheServiceImpl : NSObject
- (id)localClipStorageURLWithAwemeId:awemeModel:imageModel:uri:createTime:isVideo:scene:error:;
- (id)localVideoStorageURLWithAwemeID:awemeModel:videoURI:createTime:scene:error:;
- (id)localVideoStorageURLWithAwemeID:awemeModel:videoURI:createTime:creatorUid:scene:error:;
@end

@interface AWECommentMediaManagerSwiftImpl.CommentMediaUploadResultInfo : NSObject
@property (nonatomic) NSDictionary imageInfoDict;
@property (nonatomic) NSString videoInfo;
@property (nonatomic) NSError error;
@property (nonatomic) NSDictionary extra;
- (void)setExtra:;
- (id)videoInfo;
- (id)imageInfoDict;
- (void)setImageInfoDict:;
- (void)setVideoInfo:;
- (id)init;
- (void)setError:;
- (id)extra;
- (void).cxx_destruct;
- (id)error;
@end

@interface AWEIMCardBelowQuickEmoticonRenderModel : NSObject
@property (nonatomic) AWEIMEmoticonModel emoticonModel;
@property (nonatomic) AWEIMCacheableImageRenderModel imageRenderModel;
@property (nonatomic) NSString title;
@property (nonatomic) NSString logid;
@property (nonatomic) q renderIndex;
- (id)logid;
- (id)emoticonModel;
- (void)setEmoticonModel:;
- (long long)renderIndex;
- (void)setRenderIndex:;
- (void)setLogid:;
- (void)setImageRenderModel:;
- (id)imageRenderModel;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end

@interface AWEGameCPXPlayInnerPushModel : NSObject
@property (nonatomic) NSDictionary data;
@property (nonatomic) NSURL imageUrl;
@property (nonatomic) Q pushScene;
@property (nonatomic) AWEInnerPushControlModel pushControlModel;
@property (nonatomic) @? clickBlock;
- (void)setClickBlock:;
- (id)clickBlock;
- (unsigned long long)pushScene;
- (void)setPushScene:;
- (void)setPushControlModel:;
- (id)pushControlModel;
- (id)initWithData:scene:;
- (void)setup;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (id)imageUrl;
- (void)setImageUrl:;
@end

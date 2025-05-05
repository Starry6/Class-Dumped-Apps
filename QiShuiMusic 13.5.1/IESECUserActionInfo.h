@interface IESECUserActionInfo : NSObject
@property (nonatomic) NSString action;
@property (nonatomic) NSString scene;
@property (nonatomic) NSString sceneId;
@property (nonatomic) NSString anchorId;
@property (nonatomic) q type;
- (id)anchorId;
- (id)initWithAction:scene:sceneId:anchorId:type:;
- (void)setAnchorId:;
- (void)setScene:;
- (void)setType:;
- (id)action;
- (id)scene;
- (void)setAction:;
- (long long)type;
- (void).cxx_destruct;
- (id)sceneId;
- (void)setSceneId:;
@end

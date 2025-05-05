@interface IESLiveStreamUnifyLayoutContext : NSObject
@property (nonatomic) q scene;
@property (nonatomic) UIView mediaContainer;
@property (nonatomic) BOOL isPreview;
@property (nonatomic) <IESLiveRoomServiceAdapter> roomModel;
- (id)initWithScene:roomModel:;
- (id)roomModel;
- (id)trackParams;
- (void)updateMediaContainer:;
- (void)updateRoomModel:;
- (BOOL)isPreview;
- (long long)scene;
- (void).cxx_destruct;
- (id)mediaContainer;
@end

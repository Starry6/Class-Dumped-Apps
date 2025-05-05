@interface IESLiveCarnivalDanmakuNodeFactory : NSObject
@property (nonatomic) <IESLiveDanmakuRouter> danmakuRouter;
@property (nonatomic) IESLiveDanmakuNodeFactory danmakuNodeFactory;
@property (nonatomic) BOOL factoryFix;
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
- (id)carnivalDanmakuNodeFromMessage:settings:emoticonParser:;
- (void)carnivalDanmakuNodeFromMessage:settings:emoticonParser:completion:;
- (id)danmakuNodeFactory;
- (id)danmakuRouter;
- (BOOL)factoryFix;
- (void)resetCarnivalDanmakuNodes:settings:emoticonParser:;
- (void)setDanmakuNodeFactory:;
- (void)setDanmakuRouter:;
- (void)setFactoryFix:;
- (id)init;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
@end

@interface AWEFloatVideoData : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) <IESVideoPlayerProtocol> player;
@property (nonatomic) @? closeBlock;
@property (nonatomic) BOOL update;
- (void)setCloseBlock:;
- (id)closeBlock;
- (void)setModel:;
- (BOOL)update;
- (unsigned long long)hash;
- (void)setUpdate:;
- (id)player;
- (id)model;
- (void)setPlayer:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
@end

@interface AWESiriBackgroundPlayer : NSObject
@property (nonatomic) TTVideoEngine engine;
@property (nonatomic) AWESiriIntentsModel model;
@property (nonatomic) NSData coverImgData;
- (double)getCurrentPlayTime;
- (void)setCoverImgData:;
- (void)setupRemotePlay;
- (void)addBackgroundListener;
- (id)coverImgData;
- (void)playMusic:;
- (void)closePlayer;
- (void)setModel:;
- (id)engine;
- (id)model;
- (void)setEngine:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end

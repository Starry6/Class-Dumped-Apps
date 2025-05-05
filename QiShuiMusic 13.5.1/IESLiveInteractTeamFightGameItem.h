@interface IESLiveInteractTeamFightGameItem : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSInteger playMode;
@property (nonatomic) @? providerBlock;
@property (nonatomic) @? supportLayoutBlock;
- (BOOL)isSupportLayout:;
- (id)providerBlock;
- (void)setProviderBlock:;
- (void)setSupportLayoutBlock:;
- (id)supportLayoutBlock;
- (void)setType:;
- (id)provider;
- (long long)type;
- (void).cxx_destruct;
- (void)setPlayMode:;
- (int)playMode;
@end

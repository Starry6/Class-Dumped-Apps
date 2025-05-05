@interface AWEIMGroupMessageActivePeerViewModel : NSObject
@property (nonatomic) NSString activeTag;
@property (nonatomic) <AWEIMGMPeerViewModelConfigSource> configSource;
@property (nonatomic) AWEIMGroupMessageActiveModel model;
- (void)__updateTag;
- (id)activeTag;
- (id)configSource;
- (void)setActiveTag:;
- (void)setConfigSource:;
- (id)model;
- (void)setModel:;
- (void).cxx_destruct;
@end

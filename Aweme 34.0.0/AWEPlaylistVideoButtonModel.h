@interface AWEPlaylistVideoButtonModel : AWEBaseApiModel
@property (nonatomic) Q playlistVideoButtonSwitch;
@property (nonatomic) NSString reason;
- (void)setPlaylistVideoButtonSwitch:;
- (unsigned long long)playlistVideoButtonSwitch;
- (void)setReason:;
- (void).cxx_destruct;
- (id)reason;
+ (id)JSONKeyPathsByPropertyKey;
@end

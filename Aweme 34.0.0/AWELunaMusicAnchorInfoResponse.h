@interface AWELunaMusicAnchorInfoResponse : AWEBaseApiModel
@property (nonatomic) BOOL autoBindBasicCheck;
@property (nonatomic) AWELunaMusicAnchorSongInfo songInfo;
@property (nonatomic) NSString userLevel;
- (id)songInfo;
- (void)setSongInfo:;
- (BOOL)autoBindBasicCheck;
- (void)setAutoBindBasicCheck:;
- (id)userLevel;
- (void)setUserLevel:;
- (void).cxx_destruct;
+ (id)songInfoJSONTransformer;
+ (id)autoBindJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

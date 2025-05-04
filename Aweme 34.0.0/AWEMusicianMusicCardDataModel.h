@interface AWEMusicianMusicCardDataModel : AWEBaseApiModel
@property (nonatomic) NSString artistID;
@property (nonatomic) NSString artistName;
@property (nonatomic) Q musicTabStyle;
@property (nonatomic) Q selfSwitch;
- (unsigned long long)musicTabStyle;
- (void)setMusicTabStyle:;
- (unsigned long long)selfSwitch;
- (void)setSelfSwitch:;
- (void).cxx_destruct;
- (void)setArtistName:;
- (id)artistName;
- (id)artistID;
- (void)setArtistID:;
+ (id)JSONKeyPathsByPropertyKey;
@end

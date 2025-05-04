@interface AWELunaMusicianInfoModel : AWEBaseApiModel
@property (nonatomic) NSString artistID;
@property (nonatomic) NSString artistName;
@property (nonatomic) NSString artistDescription;
@property (nonatomic) Q songAmount;
@property (nonatomic) NSArray songs;
- (id)artistDescription;
- (void)setArtistDescription:;
- (unsigned long long)songAmount;
- (void)setSongAmount:;
- (void).cxx_destruct;
- (void)setArtistName:;
- (id)artistName;
- (id)artistID;
- (void)setArtistID:;
- (void)setSongs:;
- (id)songs;
+ (id)songsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface AWELiveShareBottomCardModel : NSObject
@property (nonatomic) Q cardStyle;
@property (nonatomic) AWEURLModel imageURL;
@property (nonatomic) UIImage image;
@property (nonatomic) NSString mainTitle;
@property (nonatomic) NSString highlightStr;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSDictionary trackInfo;
@property (nonatomic) NSDictionary enterRoomParams;
- (id)enterRoomParams;
- (void)setEnterRoomParams:;
- (id)highlightStr;
- (void)setHighlightStr:;
- (id)image;
- (void)setImage:;
- (void)setSubTitle:;
- (id)subTitle;
- (id)imageURL;
- (void).cxx_destruct;
- (void)setImageURL:;
- (id)copyWithZone:;
- (id)mainTitle;
- (void)setMainTitle:;
- (void)setTrackInfo:;
- (id)trackInfo;
- (unsigned long long)cardStyle;
- (void)setCardStyle:;
@end

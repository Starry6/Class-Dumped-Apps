@interface AWESearchStrongAnchorComponentModel : AWEBaseApiModel
@property (nonatomic) NSString anchorCardName;
@property (nonatomic) NSString title;
@property (nonatomic) NSString titleTag;
@property (nonatomic) AWEURLModel icon;
@property (nonatomic) NSString openURL;
@property (nonatomic) NSDictionary trackLoaclDict;
@property (nonatomic) AWEAnchorPoiUIInfo anchorPoiUIInfo;
@property (nonatomic) AWEAnchorTrackModel trackModel;
- (id)titleTag;
- (void)setOpenURL:;
- (void)setTrackModel:;
- (id)trackModel;
- (id)anchorCardName;
- (void)setAnchorCardName:;
- (void)setTitleTag:;
- (id)anchorPoiUIInfo;
- (void)setAnchorPoiUIInfo:;
- (void)transformWithTransformModel:;
- (void)setTrackLoaclDict:;
- (id)trackLoaclDict;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)openURL;
@end

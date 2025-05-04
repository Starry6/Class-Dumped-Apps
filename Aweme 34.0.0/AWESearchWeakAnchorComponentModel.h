@interface AWESearchWeakAnchorComponentModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString titleTag;
@property (nonatomic) AWEURLModel icon;
@property (nonatomic) NSString openURL;
@property (nonatomic) AWEAnchorTrackModel trackModel;
@property (nonatomic) NSDictionary trackLoaclDict;
- (id)titleTag;
- (void)setOpenURL:;
- (void)setTrackModel:;
- (id)trackModel;
- (void)setTitleTag:;
- (void)transformWithTransformModel:;
- (void)setTrackLoaclDict:;
- (id)trackLoaclDict;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)openURL;
+ (BOOL)hitAnchorExpWithModel:;
+ (BOOL)hitPOIAnchorExpWithModel:;
+ (BOOL)hitNormalStylePOIAnchorExpWithModel:;
+ (BOOL)hitOtherAnchorExpWithModel:;
@end

@interface AWEFollowShootChoosePopupConfigModel : AWEBaseBizConfigModel
@property (nonatomic) NSArray itemArray;
@property (nonatomic) NSString cancelText;
@property (nonatomic) AWEFollowShootChoosePopupTrackModel showTrack;
@property (nonatomic) AWEFollowShootChoosePopupTrackModel cancelTrack;
- (id)itemArray;
- (void)setItemArray:;
- (id)showTrack;
- (id)cancelText;
- (void)setCancelText:;
- (void)setShowTrack:;
- (id)cancelTrack;
- (void)setCancelTrack:;
- (void).cxx_destruct;
+ (id)itemArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

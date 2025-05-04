@interface AWEMusicStreamingImpl.LunaSongCell : UITableViewCell
@property (nonatomic) q cellStyle;
@property (nonatomic) BOOL needShowPlaying;
@property (nonatomic) BOOL needShowSubscriberIcon;
@property (nonatomic) BOOL onlyRespondToTitleClick;
@property (nonatomic) BOOL needAdaptBigFontMode;
- (BOOL)needShowPlaying;
- (void)setNeedShowPlaying:;
- (BOOL)needShowSubscriberIcon;
- (void)setNeedShowSubscriberIcon:;
- (BOOL)onlyRespondToTitleClick;
- (void)setOnlyRespondToTitleClick:;
- (BOOL)needAdaptBigFontMode;
- (void)setNeedAdaptBigFontMode:;
- (void)updateWithTrack:index:;
- (void)updateWithPlayStatus:;
- (long long)cellStyle;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (id)initWithCoder:;
- (void)setCellStyle:;
@end

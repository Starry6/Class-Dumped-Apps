@interface AWEMusicCardExtensionModel : NSObject
@property (nonatomic) NSString activitySubtitle;
@property (nonatomic) NSString defaultSubtitle;
@property (nonatomic) NSArray lightIcon;
@property (nonatomic) NSArray darkIcon;
@property (nonatomic) NSString secId;
- (id)lightIcon;
- (id)darkIcon;
- (void)setLightIcon:;
- (void)setDarkIcon:;
- (id)secId;
- (void)setSecId:;
- (void)setDefaultSubtitle:;
- (void)setActivitySubtitle:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)activitySubtitle;
- (id)defaultSubtitle;
@end

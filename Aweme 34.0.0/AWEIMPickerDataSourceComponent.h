@interface AWEIMPickerDataSourceComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (id)pickerConfig;
- (id)loadFirstScreenOrganizedAssetsWithFilterType:;
- (void)asyncLoadCameraRollOtherOrganizedSubAlbums:;
- (void)asyncLoadOtherAllOrganizedSubAlbums:;
- (id)pickerVC;
- (id)BPEAKey;
@end

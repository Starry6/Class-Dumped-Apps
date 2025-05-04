@interface AWEIMPickerPreivewConfigration : NSObject
@property (nonatomic) AWEIMAlbumModel album;
@property (nonatomic) q currentSelectIndex;
@property (nonatomic) AWEIMComponentContext parentContext;
@property (nonatomic) AWEIMPickerConfiguration pickerConfig;
@property (nonatomic) BOOL isFromQuickPicker;
- (long long)currentSelectIndex;
- (void)setCurrentSelectIndex:;
- (void)setPickerConfig:;
- (id)pickerConfig;
- (BOOL)isFromQuickPicker;
- (void)setIsFromQuickPicker:;
- (void)setAlbum:;
- (void).cxx_destruct;
- (id)album;
- (id)parentContext;
- (void)setParentContext:;
@end

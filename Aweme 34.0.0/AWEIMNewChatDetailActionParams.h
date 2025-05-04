@interface AWEIMNewChatDetailActionParams : NSObject
@property (nonatomic) BOOL inMoreSetting;
@property (nonatomic) BOOL isAutomatic;
@property (nonatomic) BOOL shouldShowKeyboard;
- (BOOL)inMoreSetting;
- (BOOL)shouldShowKeyboard;
- (void)setInMoreSetting:;
- (void)setShouldShowKeyboard:;
- (id)init;
- (BOOL)isAutomatic;
- (void)setIsAutomatic:;
@end

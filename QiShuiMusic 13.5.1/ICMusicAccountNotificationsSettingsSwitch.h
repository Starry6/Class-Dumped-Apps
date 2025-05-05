@interface ICMusicAccountNotificationsSettingsSwitch : NSObject
@property (nonatomic) BOOL isToggled;
@property (nonatomic) BOOL hasBeenPreviouslyToggled;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSDictionary itemResponseDictionary;
- (void)setIsToggled:;
- (id)identifier;
- (id)initWithToggleState:hasBeenToggled:identifier:;
- (void)setHasBeenPreviouslyToggled:;
- (BOOL)hasBeenPreviouslyToggled;
- (BOOL)isToggled;
- (void).cxx_destruct;
- (id)itemResponseDictionary;
- (id)initWithItemResponseDictionary:;
@end

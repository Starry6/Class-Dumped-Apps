@interface AWEECOMIMPopMenuItem : NSObject
@property (nonatomic) NSString menuTitle;
@property (nonatomic) UIImage menuImage;
@property (nonatomic) Q type;
@property (nonatomic) NSString trackName;
- (unsigned long long)type;
- (void)setType:;
- (id)menuTitle;
- (void)setMenuTitle:;
- (void).cxx_destruct;
- (void)setMenuImage:;
- (id)menuImage;
- (void)setTrackName:;
- (id)trackName;
+ (id)menuItemsWithTypes:;
+ (id)menuItemWithType:;
+ (id)titleWithTypeMapper;
+ (id)imageNameWithTypeMapper;
+ (id)trackNameWithTypeMapper;
@end

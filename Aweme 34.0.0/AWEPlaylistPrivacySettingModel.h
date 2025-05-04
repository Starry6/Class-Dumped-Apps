@interface AWEPlaylistPrivacySettingModel : NSObject
@property (nonatomic) Q type;
@property (nonatomic) BOOL isSelected;
- (id)initWithType:isSelected:;
- (void)setIsSelected:;
- (BOOL)isSelected;
- (unsigned long long)type;
- (void)setType:;
@end

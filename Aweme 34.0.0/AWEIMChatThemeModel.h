@interface AWEIMChatThemeModel : MTLModel
@property (nonatomic) BOOL isDefault;
@property (nonatomic) NSString key;
@property (nonatomic) NSString type;
@property (nonatomic) AWEIMChatBackgroundModel currentBackground;
@property (nonatomic) AWEIMChatBackgroundModel originBackground;
@property (nonatomic) AWEIMChatThemeBubbleModel bubbleModel;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) q version;
@property (nonatomic) NSString title;
@property (nonatomic) NSString itemURL;
@property (nonatomic) NSString darkItemURL;
@property (nonatomic) BOOL isLocked;
@property (nonatomic) NSString lockedTitle;
@property (nonatomic) NSString setterUid;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) AWEIMChatBackgroundModel customBackgroundModel;
@property (nonatomic) UIImage customBackgroundImage;
@property (nonatomic) q index;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentBackground;
- (void)setCurrentBackground:;
- (id)bubbleModel;
- (void)setBubbleModel:;
- (id)originBackground;
- (void)setCustomBackgroundImage:;
- (void)setCustomBackgroundModel:;
- (id)customBackgroundModel;
- (id)customBackgroundImage;
- (void)fillDataWithThemeModel:;
- (id)lockedTitle;
- (id)darkItemURL;
- (void)setOriginBackground:;
- (void)setDarkItemURL:;
- (void)setLockedTitle:;
- (id)setterUid;
- (void)setSetterUid:;
- (void)setIndex:;
- (void)setIsSelected:;
- (long long)index;
- (void)setStartTime:;
- (void)setKey:;
- (long long)endTime;
- (BOOL)isDefault;
- (void)setEndTime:;
- (BOOL)isLocked;
- (long long)version;
- (void)setIsDefault:;
- (id)key;
- (void)setIsLocked:;
- (BOOL)isSelected;
- (id)type;
- (void)setVersion:;
- (id)itemURL;
- (void)setType:;
- (BOOL)hasBackground;
- (void).cxx_destruct;
- (id)title;
- (long long)startTime;
- (void)setTitle:;
- (void)setItemURL:;
- (id)copyWithZone:;
+ (id)currentBackgroundJSONTransformer;
+ (id)originBackgroundJSONTransformer;
+ (id)bubbleModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

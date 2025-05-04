@interface AWEIMPlatformMessageTypeSettingsModel : MTLModel
@property (nonatomic) q messageType;
@property (nonatomic) q aweType;
@property (nonatomic) NSString minSupportVersion;
@property (nonatomic) NSArray messageMenuList;
@property (nonatomic) NSArray messageMenuItems;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)aweType;
- (id)minSupportVersion;
- (void)setMinSupportVersion:;
- (void)setAweType:;
- (id)messageMenuItemsWithMessage:conversation:cell:;
- (id)messageMenuItems;
- (id)messageMenuList;
- (BOOL)belowMinimumSupportVersion;
- (id)__platformMenuTypeToMenuItemDict;
- (void)setMessageMenuList:;
- (void)setMessageMenuItems:;
- (id)initWithRawDictionary:;
- (void).cxx_destruct;
- (void)setMessageType:;
- (long long)messageType;
+ (long long)appVersionCode;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end

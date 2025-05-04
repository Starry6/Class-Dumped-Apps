@interface AWEHPBottomTabItemModel : MTLModel
@property (nonatomic) NSString channelType;
@property (nonatomic) NSString channelID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString referString;
@property (nonatomic) NSDictionary channelInfo;
@property (nonatomic) BOOL limitTitleModify;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)referString;
- (void)setReferString:;
- (BOOL)limitTitleModify;
- (void)setLimitTitleModify:;
- (id)channelType;
- (void)setChannelID:;
- (id)channelID;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setChannelInfo:;
- (id)channelInfo;
- (void)setChannelType:;
+ (id)JSONKeyPathsByPropertyKey;
@end

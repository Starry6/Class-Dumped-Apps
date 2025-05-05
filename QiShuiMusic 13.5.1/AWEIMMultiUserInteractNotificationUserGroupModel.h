@interface AWEIMMultiUserInteractNotificationUserGroupModel : IESIMBaseApiModel
@property (nonatomic) NSNumber userID;
@property (nonatomic) NSArray groups;
- (id)userID;
- (id)groups;
- (void)setGroups:;
- (void).cxx_destruct;
- (void)setUserID:;
+ (id)groupsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

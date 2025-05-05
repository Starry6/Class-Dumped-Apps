@interface SASettingGetValueResponse : SASettingResponse
@property (nonatomic) SASettingEntity setting;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)setting;
- (void)setSetting:;
+ (id)getValueResponse;
+ (id)getValueResponseWithDictionary:context:;
@end

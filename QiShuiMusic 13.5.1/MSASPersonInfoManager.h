@interface MSASPersonInfoManager : NSObject
@property (nonatomic) NSMutableDictionary personIDToPersonInfoDictionary;
@property (nonatomic) NSString pathForPersonInfoDictionary;
- (void).cxx_destruct;
- (void)initWithPath:;
- (id)firstNameForPersonID:;
- (id)emailForPersonID:;
- (id)lastNameForPersonID:;
- (id)fullNameForPersonID:;
- (BOOL)updateWithSharingRelationship:;
- (id)personIDToPersonInfoDictionary;
- (void)setPersonIDToPersonInfoDictionary:;
- (id)pathForPersonInfoDictionary;
- (void)setPathForPersonInfoDictionary:;
+ (id)allocWithZone:;
+ (id)sharedManager;
@end

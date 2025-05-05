@interface CNGroupIdentity : NSObject
@property (nonatomic) NSData groupPhoto;
@property (nonatomic) NSString groupName;
@property (nonatomic) NSArray contacts;
@property (nonatomic) q numberOfContacts;
@property (nonatomic) NSString identifier;
- (void)setContacts:;
- (id)contacts;
- (id)identifier;
- (void)setGroupName:;
- (void).cxx_destruct;
- (id)groupName;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (void)updateGroupName:;
- (id)initGroupWithName:photo:contacts:;
- (id)initGroupWithName:photo:contacts:identifier:;
- (long long)numberOfContacts;
- (void)updateGroupPhoto:;
- (void)updateContacts:;
- (id)groupPhoto;
- (void)setGroupPhoto:;
@end

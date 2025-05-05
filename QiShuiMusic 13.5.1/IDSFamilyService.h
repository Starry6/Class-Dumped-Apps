@interface IDSFamilyService : IDSService
@property (nonatomic) NSSet familyMembers;
@property (nonatomic) NSDictionary dsidToFamilyMember;
@property (nonatomic) NSDictionary dsidToDeviceList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)sendMessage:toDestinations:priority:options:identifier:error:;
- (BOOL)sendData:toDestinations:priority:options:identifier:error:;
- (id)familyMembers;
- (BOOL)sendProtobuf:toDestinations:priority:options:identifier:error:;
- (void).cxx_destruct;
- (void)service:familyInfoUpdated:;
- (void)setFamilyMembers:;
- (BOOL)sendResourceAtURL:metadata:toDestinations:priority:options:identifier:error:;
- (BOOL)isValidDestination:error:;
- (id)familyHandles;
- (void)fetchFamilyMembersWithDevices:;
- (id)dsidToFamilyMember;
- (void)setDsidToFamilyMember:;
- (id)dsidToDeviceList;
- (void)setDsidToDeviceList:;
@end

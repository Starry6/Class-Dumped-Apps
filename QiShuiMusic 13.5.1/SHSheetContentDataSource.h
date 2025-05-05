@interface SHSheetContentDataSource : NSObject
@property (nonatomic) SHSheetContentDataSourceState state;
@property (nonatomic) q excludeSectionTypes;
@property (nonatomic) NSDiffableDataSourceSnapshot diffableSnapshot;
@property (nonatomic) NSArray peopleProxies;
@property (nonatomic) NSArray shareProxies;
@property (nonatomic) NSArray actionProxies;
@property (nonatomic) I nearbyCountSlotID;
@property (nonatomic) UIAirDropNode airDropProxy;
- (id)state;
- (void).cxx_destruct;
- (id)description;
- (id)initWithState:excludeSectionTypes:;
- (BOOL)containsSectionForIdentifier:;
- (id)peopleProxyForIdentifier:;
- (id)shareProxyForIdentifier:;
- (id)actionProxyForIdentifier:;
- (id)activityForIdentifier:;
- (id)identifierForActivity:;
- (id)createChangeRequestFromCurrentState;
- (id)_createDiffableSnapshotFromCurrentState;
- (id)diffableSnapshot;
- (id)peopleProxies;
- (id)shareProxies;
- (id)actionProxies;
- (unsigned int)nearbyCountSlotID;
- (id)airDropProxy;
- (long long)excludeSectionTypes;
@end

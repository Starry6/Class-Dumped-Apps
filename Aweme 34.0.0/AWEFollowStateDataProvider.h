@interface AWEFollowStateDataProvider : AWESocialRelationDataProvider
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)readFromMemory:;
- (long long)mutualFollowTypeWithUser:scene:;
- (id)identifier;
@end

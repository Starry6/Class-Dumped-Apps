@interface AWECloseFriendsActionRequest : AWESocialRelationRequest
@property (nonatomic) NSString URLString;
@property (nonatomic) NSString userID;
@property (nonatomic) q currentType;
@property (nonatomic) NSArray userIDList;
@property (nonatomic) q sourcePage;
@property (nonatomic) q actionType;
- (void)setSourcePage:;
- (long long)sourcePage;
- (id)getParams;
- (void)setCurrentType:;
- (void)setUserIDList:;
- (id)userIDList;
- (long long)actionType;
- (void)setActionType:;
- (id)URLString;
- (id)userID;
- (void).cxx_destruct;
- (id)initWithScene:;
- (void)setUserID:;
- (void)setURLString:;
- (long long)currentType;
@end

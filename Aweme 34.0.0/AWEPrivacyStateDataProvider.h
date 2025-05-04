@interface AWEPrivacyStateDataProvider : AWESocialRelationDataProvider
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)interceptor_readFromMemory:;
- (void)didFinishBlockUser:status:;
- (void)didFinishUnBlockUser:status:;
- (void)didFinishHideMyPostFromUser:status:;
- (void)didFinishShowMyPostToUser:status:;
- (void)didFinishHidePostFromHer:status:;
- (void)didFinishUnHidePostFromHer:status:;
- (id)readFromMemory:;
- (void)updatePrivacyTablesWithProfileUser:;
- (void)doubleCheckAweme:response:enterFrom:;
- (id)privacyTypeDictionary;
- (id)userExisted:privacyType:;
- (void)operateWithTableName:profileUser:;
- (void)insertModelWithUserID:tableName:;
- (void)deleteModelWithUserID:tableName:;
- (id)init;
- (void)dealloc;
- (id)identifier;
@end

@interface CNUIGroupsAndContainersContactsSaveResult : NSObject
@property (nonatomic) BOOL saveDidSucceed;
@property (nonatomic) NSError error;
@property (nonatomic) NSArray addedContacts;
- (id)error;
- (void).cxx_destruct;
- (id)initWithSuccess:error:addedContacts:;
- (BOOL)saveDidSucceed;
- (id)addedContacts;
@end

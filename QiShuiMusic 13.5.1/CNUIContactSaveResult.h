@interface CNUIContactSaveResult : NSObject
@property (nonatomic) BOOL success;
@property (nonatomic) CNMutableContact contact;
@property (nonatomic) NSArray identifiersOfIssuedSaveRequests;
- (id)contact;
- (BOOL)success;
- (void).cxx_destruct;
- (id)initWithSuccess:contact:identifiersOfIssuedSaveRequests:;
- (id)identifiersOfIssuedSaveRequests;
@end

@interface AWEIMActionRecordController : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (void)__log:;
- (id)__concatUserIDWithString:;
- (id)addActionRecord:;
- (id)removeActionRecord:;
- (id)asyncGetValidActionRecordsWithConversationShortID:types:;
@end

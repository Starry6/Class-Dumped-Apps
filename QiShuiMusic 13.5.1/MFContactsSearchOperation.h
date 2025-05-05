@interface MFContactsSearchOperation : NSOperation
@property (nonatomic) MFContactsSearchManager owner;
@property (nonatomic) NSNumber taskID;
@property (nonatomic) NSString text;
@property (nonatomic) NSString sendingAddress;
@property (nonatomic) Q type;
- (id)owner;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)taskID;
- (id)text;
- (id)sendingAddress;
+ (id)operationWithOwner:text:taskID:;
@end

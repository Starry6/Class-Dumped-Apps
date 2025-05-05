@interface CNContactBufferDecoder : NSObject
@property (nonatomic) BOOL mutableResults;
@property (nonatomic) CNContactKeyVector keyDescriptorToMakeAvailable;
@property (nonatomic) BOOL hasPendingContacts;
- (BOOL)decodeContactsFromBuffer:replyHandler:;
- (void)setMutableResults:;
- (BOOL)hasPendingContacts;
- (BOOL)mutableResults;
- (void).cxx_destruct;
- (id)initWithKeyDescriptorToMakeAvailable:mutableResults:;
- (id)keyDescriptorToMakeAvailable;
- (void)setKeyDescriptorToMakeAvailable:;
@end

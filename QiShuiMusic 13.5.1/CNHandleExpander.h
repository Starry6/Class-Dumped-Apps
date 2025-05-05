@interface CNHandleExpander : NSObject
@property (nonatomic) NSArray incomingAddresses;
@property (nonatomic) NSArray expandedAddresses;
- (void).cxx_destruct;
- (id)initWithHandles:;
- (id)expandedHandles;
- (void)expandHandles;
- (id)incomingAddresses;
- (void)setIncomingAddresses:;
- (id)expandedAddresses;
- (void)setExpandedAddresses:;
+ (id)contactStoreForFetchingContacts;
@end

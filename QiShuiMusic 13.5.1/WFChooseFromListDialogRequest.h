@interface WFChooseFromListDialogRequest : WFDialogRequest
@property (nonatomic) NSXPCConnection xpcConnection;
@property (nonatomic) NSArray items;
@property (nonatomic) BOOL allowsMultipleSelection;
@property (nonatomic) NSString message;
@property (nonatomic) NSString emptyStateMessage;
@property (nonatomic) WFDialogButton doneButton;
@property (nonatomic) WFDialogButton cancelButton;
@property (nonatomic) NSXPCListenerEndpoint dataStoreEndpoint;
@property (nonatomic) <WFDialogListItemStore> dataStore;
- (id)dataStore;
- (id)items;
- (id)initWithCoder:;
- (void)setXpcConnection:;
- (void)encodeWithCoder:;
- (id)xpcConnection;
- (id)message;
- (void).cxx_destruct;
- (id)doneButton;
- (id)cancelButton;
- (BOOL)allowsMultipleSelection;
- (id)initWithItems:allowsMultipleSelection:message:attribution:prompt:;
- (id)emptyStateMessage;
- (id)dataStoreEndpoint;
- (void)setDataStoreEndpoint:;
+ (BOOL)supportsSecureCoding;
@end

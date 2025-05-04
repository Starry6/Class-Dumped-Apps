@interface AWEIMOpenRedPacketAlertContext : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString schema;
@property (nonatomic) AWEIMActionRecord record;
@property (nonatomic) @? closeCallback;
- (id)closeCallback;
- (id)initWithIdentifier:schema:;
- (void)updateActionRecord:;
- (void)updateCloseCallback:;
- (id)schema;
- (id)identifier;
- (id)record;
- (void).cxx_destruct;
@end

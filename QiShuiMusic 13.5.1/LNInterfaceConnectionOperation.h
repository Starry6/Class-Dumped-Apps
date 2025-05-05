@interface LNInterfaceConnectionOperation : LNConnectionOperation
@property (nonatomic) <LNConnectionHostInterface> connectionInterface;
- (id)connectionInterface;
- (void).cxx_destruct;
- (id)initWithIdentifier:connectionInterface:priority:activity:;
@end

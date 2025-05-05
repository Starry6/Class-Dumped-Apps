@interface DAOofSettingsInfo : DAOofParams
@property (nonatomic) NSString requestID;
@property (nonatomic) <DAOofResponseDelegate> consumer;
- (id)consumer;
- (id)requestID;
- (void).cxx_destruct;
- (void)setRequestID:;
- (void)setConsumer:;
@end

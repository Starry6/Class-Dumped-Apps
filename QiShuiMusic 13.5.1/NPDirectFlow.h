@interface NPDirectFlow : NSObject
@property (nonatomic) NSNumber identifier;
@property (nonatomic) ^{nw_protocol=[16C]^{nw_protocol_identifier}^{nw_protocol_callbacks}^{nw_protocol}^v^{nw_protocol}^v} protocol;
@property (nonatomic) NSPConnectionInfo connectionInfo;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate connectionStartDate;
@property (nonatomic) NSDate firstTxByteTimestamp;
- (id)protocol;
- (id)startDate;
- (id)connectionInfo;
- (id)initWithParameters:;
- (id)identifier;
- (void).cxx_destruct;
- (void)setConnectionInfo:;
- (void)handleDetachedFromProtocol;
- (void)createConnectionInfo;
- (id)connectionStartDate;
- (void)setConnectionStartDate:;
- (id)firstTxByteTimestamp;
- (void)setFirstTxByteTimestamp:;
+ (void)initializeProtocol;
@end

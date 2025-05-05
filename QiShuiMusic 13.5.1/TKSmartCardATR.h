@interface TKSmartCardATR : NSObject
@property (nonatomic) NSData bytes;
@property (nonatomic) NSArray protocols;
@property (nonatomic) NSData historicalBytes;
@property (nonatomic) NSArray historicalRecords;
- (id)initWithSource:;
- (id)initWithBytes:;
- (id)protocols;
- (id)bytes;
- (void).cxx_destruct;
- (id)description;
- (id)historicalBytes;
- (id)parseFromSource:;
- (id)interfaceGroupAtIndex:;
- (id)interfaceGroupForProtocol:;
- (id)_formatHexData:to:;
- (id)historicalRecords;
@end

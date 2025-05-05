@interface IDSSocketPairHandshake : IDSSocketPairMessage
@property (nonatomic) I versionNumber;
- (unsigned char)command;
- (unsigned int)versionNumber;
- (id)initWithCommand:underlyingData:;
- (id)_nonHeaderData;
- (id)initWithVersionNumber:;
@end

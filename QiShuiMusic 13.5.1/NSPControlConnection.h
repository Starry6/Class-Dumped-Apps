@interface NSPControlConnection : NSObject
@property (nonatomic) Q flowIdentifier;
- (id)initFromMetadata:;
- (unsigned long long)flowIdentifier;
- (id)initFromStream:;
- (id)initFromTask:;
- (id)initFromConnection:;
- (id)initFromNWConnection:;
- (void)fetchConnectionInfoWithCompletionHandler:;
@end

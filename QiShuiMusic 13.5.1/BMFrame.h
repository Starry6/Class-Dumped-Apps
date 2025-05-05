@interface BMFrame : NSObject
@property (nonatomic) ^v framePtr;
@property (nonatomic) {?=(?={?=II}Q){?=ddII}} frameHeader;
@property (nonatomic) NSString storePath;
@property (nonatomic) I dataVersion;
@property (nonatomic) NSData data;
@property (nonatomic) Q offset;
@property (nonatomic) Q nextOffset;
@property (nonatomic) double creationTimestamp;
@property (nonatomic) double modifiedTimestamp;
@property (nonatomic) I state;
- (id)data;
- (unsigned long long)nextOffset;
- (unsigned int)dataVersion;
- (id)framePtr;
- (unsigned long long)offset;
- (id)frameHeader;
- (unsigned int)state;
- (id)initWithHeader:storePath:data:framePtr:offset:nextOffset:;
- (id)storePath;
- (void).cxx_destruct;
- (double)modifiedTimestamp;
- (double)creationTimestamp;
@end

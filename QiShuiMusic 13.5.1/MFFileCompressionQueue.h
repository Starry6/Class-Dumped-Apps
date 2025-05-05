@interface MFFileCompressionQueue : NSObject
@property (nonatomic) NSMutableArray fileCompressionQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (long long)size;
- (void)addFile:;
- (BOOL)hasNext;
- (id)nextFile;
- (id)fileCompressionQueue;
- (void)setFileCompressionQueue:;
+ (id)log;
+ (id)sharedInstance;
@end

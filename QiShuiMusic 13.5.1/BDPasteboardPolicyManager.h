@interface BDPasteboardPolicyManager : NSObject
@property (nonatomic) @? enableReadBlock;
@property (nonatomic) @? enableWriteBlock;
@property (nonatomic) @? readBlock;
@property (nonatomic) @? writeBlock;
- (id)enableReadBlock;
- (id)enableWriteBlock;
- (void)setEnableReadBlock:;
- (void)setEnableWriteBlock:;
- (void).cxx_destruct;
- (id)writeBlock;
- (id)readBlock;
- (void)setReadBlock:;
- (void)setWriteBlock:;
+ (BOOL)enablePasteboardDevSuiteForRead;
+ (BOOL)enablePasteboardDevSuiteForWrite;
+ (id)readWithAPI:containsDataAPI:pasteboardType:inItemSet:cert:error:;
+ (void)registerEnablePasteboardDevSuiteForReadBlock:;
+ (void)registerEnablePasteboardDevSuiteForWriteBlock:;
+ (void)registerReadBlock:;
+ (void)writeWithAPI:setValue:pasteboardType:options:cert:error:;
+ (id)sharedInstance;
+ (void)registerWriteBlock:;
@end

@interface MTLIOAccelResourcePool : NSObject
@property (nonatomic) ^{IOAccelNewResourceArgs={IOAccelNewResourceData=IISSSSQQCCCCIQQQ(?={?=QQQQI}{?=II[3Q]}{?=IIII[2Q]}{?=II[3Q]})}} resourceArgs;
@property (nonatomic) I resourceArgsSize;
- (void)purge;
- (void)dealloc;
- (void)purgeWithLock;
- (id)initWithDevice:resourceClass:resourceArgs:resourceArgsSize:options:;
- (unsigned int)resourceArgsSize;
- (int)availableCount;
- (BOOL)updateResourcePurgeability;
- (id)resourceArgs;
- (void)setResourceArgs:resourceArgsSize:;
@end

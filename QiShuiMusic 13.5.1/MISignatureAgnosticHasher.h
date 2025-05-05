@interface MISignatureAgnosticHasher : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) NSString sectionName;
@property (nonatomic) NSInteger fd;
@property (nonatomic) I countOfSlicesWithNamedSection;
@property (nonatomic) BOOL hasNamedSection;
@property (nonatomic) NSDictionary hashes;
- (int)fd;
- (id)url;
- (void)dealloc;
- (id)hashes;
- (void).cxx_destruct;
- (id)sectionName;
- (id)initWithExecutable:searchForSectionNamed:;
- (id)_hashSliceAtOffset:withSize:machHeaderAndCommands:dictionaryKey:error:;
- (BOOL)performHashWithError:;
- (BOOL)hasNamedSection;
- (void)setFd:;
- (unsigned int)countOfSlicesWithNamedSection;
- (void)setCountOfSlicesWithNamedSection:;
+ (id)packedNumberForCPUType:subtype:;
+ (void)unpackPackedCpuTypeAndSubType:cputype:subtype:;
@end

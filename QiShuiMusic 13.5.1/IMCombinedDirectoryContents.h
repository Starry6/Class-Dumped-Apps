@interface IMCombinedDirectoryContents : IMDirectoryContents
@property (nonatomic) NSArray directoryContents;
- (void).cxx_destruct;
- (void)gather;
- (id)directoryContents;
- (id)initWithCombinedDirectoryContents:;
- (id)combineArrays:rhs:;
@end

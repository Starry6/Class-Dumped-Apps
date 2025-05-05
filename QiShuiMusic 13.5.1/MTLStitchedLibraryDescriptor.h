@interface MTLStitchedLibraryDescriptor : NSObject
@property (nonatomic) NSArray binaryArchives;
@property (nonatomic) Q options;
@property (nonatomic) NSArray functionGraphs;
@property (nonatomic) NSArray functions;
- (void)setOptions:;
- (void)setBinaryArchives:;
- (id)init;
- (void)dealloc;
- (id)binaryArchives;
- (id)formattedDescription:;
- (id)functions;
- (unsigned long long)options;
- (id)description;
- (void)setFunctions:;
- (id)copyWithZone:;
- (id)functionGraphs;
- (void)setFunctionGraphs:;
@end

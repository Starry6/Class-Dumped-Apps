@interface LynxUIListDiffResult : NSObject
@property (nonatomic) NSArray removePaths;
@property (nonatomic) NSArray insertPaths;
@property (nonatomic) NSArray updateFromPaths;
@property (nonatomic) NSArray updateToPaths;
@property (nonatomic) NSArray moveFromPaths;
@property (nonatomic) NSArray moveToPaths;
@property (nonatomic) BOOL empty;
- (id)updateFromPaths;
- (id)initWithDiffResult:;
- (id)initWithNumberOfInsertions:;
- (id)initWithUpdateFromPath:updateToPath:removePath:insertPath:moveFromPath:moveToPath:;
- (id)insertPaths;
- (id)moveFromPaths;
- (id)moveToPaths;
- (id)removePaths;
- (id)updateToPaths;
- (BOOL)isEmpty;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)description;
@end

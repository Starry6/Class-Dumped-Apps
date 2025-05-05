@interface AnnieLiveBizHandler : NSObject
@property (nonatomic) NSDictionary puzzleContextHolder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canOpenAnnieURLString:;
- (id)fetchPuzzleContextWithContainer:;
- (id)fetchPuzzleContextWithKey:;
- (BOOL)openAnnieContainerIfNeed:originalContext:completion:;
- (id)puzzleContextHolder;
- (void)removePuzzleContextWithKey:;
- (void)setPuzzleContextHolder:;
- (id)setPuzzleContextWithSchema:originalContext:;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)canOpenAnnieXCardURLString:bid:;
+ (BOOL)canOpenAnnieCard:bid:isAnnieX:;
+ (BOOL)canOpenBDXCardURLString:bid:;
+ (id)createService;
+ (void)loadSwizzled;
@end

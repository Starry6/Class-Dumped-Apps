@interface VMUClassInfoMap : NSObject
@property (nonatomic) I count;
@property (nonatomic) I fieldInfoCount;
@property (nonatomic) BOOL hasClassInfosDerivedFromStackBacktraces;
- (id)init;
- (void)dealloc;
- (unsigned int)addClassInfo:forAddress:;
- (id)fieldInfoForIndex:;
- (id)classInfoForAddress:;
- (void)_applyTypeOverlay:;
- (unsigned int)indexForClassInfo:;
- (id)initWithCoder:;
- (unsigned int)fieldInfoCount;
- (id)classInfoForIndex:;
- (unsigned int)addFieldInfo:;
- (void)encodeWithCoder:;
- (unsigned int)indexForFieldInfo:;
- (void)enumerateInfosWithBlock:;
- (void).cxx_destruct;
- (void)addClassInfosFromMap:;
- (id)swiftFieldWithName:offset:kind:typeref:;
- (void)memoizeSwiftField:withName:offset:kind:typeref:;
- (id)_retainedLinearArrayWithReturnedCount:;
- (unsigned int)count;
- (BOOL)hasClassInfosDerivedFromStackBacktraces;
+ (BOOL)supportsSecureCoding;
+ (void)_destroyRetainedLinearArray:withCount:;
@end

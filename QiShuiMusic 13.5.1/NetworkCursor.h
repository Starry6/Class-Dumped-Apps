@interface NetworkCursor : NSObject
@property (nonatomic) Q stateType;
- (id)init;
- (void)setStateType:;
- (void).cxx_destruct;
- (unsigned long long)stateType;
- (id).cxx_construct;
- (void)addNodeIndex:withStateType:;
- (unsigned long long)nodeIndexCount;
- (unsigned long long)nodeIndexAtPosition:;
- (BOOL)isCompletePattern;
+ (id)cursorByAddingNodeIndex:toCursor:;
@end

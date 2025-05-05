@interface UIKBSplitKeyplaneGenerator : NSObject
- (id)init;
- (id)keysOrderedByPosition;
- (void).cxx_destruct;
- (void)addSliceStart:end:startToken:endToken:left:normalization:isDefaultWidth:row:;
- (void)splitSpaceKey:leftSpace:left:right:;
- (void)commitUncommittedSlices;
- (void)addKey:withShape:forRow:attribs:left:force:isDefaultWidth:;
- (void)alignSpaceKeyEdges;
- (void)splitRow:;
- (id)hintsForRow:;
- (void)organizeKeyplaneIntoRows;
- (void)initializeGeneratorForKeyplane:name:;
- (id)finalizeSplitKeyplane;
- (id)generateRivenKeyplaneFromKeyplane:forKeyboard:;
@end

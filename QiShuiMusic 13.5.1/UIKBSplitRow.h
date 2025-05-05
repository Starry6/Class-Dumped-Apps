@interface UIKBSplitRow : NSObject
@property (nonatomic) C rowIndex;
@property (nonatomic) double rowOffset;
@property (nonatomic) double rowWidth;
@property (nonatomic) {CGSize=dd} defaultKeySize;
@property (nonatomic) NSMutableArray keys;
@property (nonatomic) NSDictionary hints;
- (id)init;
- (id)keys;
- (void)dealloc;
- (void)addKey:;
- (id)keyAtIndex:;
- (void).cxx_destruct;
- (id)description;
- (void)setRowIndex:;
- (id)listOfType:left:;
- (unsigned char)rowIndex;
- (double)rowOffset;
- (void)setRowOffset:;
- (double)rowWidth;
- (void)setRowWidth:;
- (id)defaultKeySize;
- (void)setDefaultKeySize:;
- (id)hints;
- (void)setHints:;
@end

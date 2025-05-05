@interface UIDictationStreamingOperation : NSBlockOperation
@property (nonatomic) q selectionChangeDelta;
- (void)start;
- (long long)selectionChangeDelta;
- (void)setSelectionChangeDelta:;
@end

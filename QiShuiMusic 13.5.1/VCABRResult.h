@interface VCABRResult : NSObject
@property (nonatomic) NSMutableArray elements;
- (void)addElement:;
- (id)init;
- (id)elements;
- (void)setElements:;
- (id)elementAtIndex:;
- (void).cxx_destruct;
- (int)getSize;
@end

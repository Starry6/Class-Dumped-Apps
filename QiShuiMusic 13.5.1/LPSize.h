@interface LPSize : NSObject
@property (nonatomic) LPPointUnit width;
@property (nonatomic) LPPointUnit height;
@property (nonatomic) {CGSize=dd} asSize;
@property (nonatomic) BOOL empty;
- (id)init;
- (BOOL)isEmpty;
- (id)initWithSize:;
- (id)height;
- (id)width;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithSquareSize:;
- (id)initWithSquarePoints:;
- (id)asSize;
@end

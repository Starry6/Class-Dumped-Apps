@interface BmfRational : NSObject
@property (nonatomic) NSInteger num;
@property (nonatomic) NSInteger den;
- (void)setDen:;
- (int)den;
- (id)init:den:;
- (void)setNum:;
- (int)num;
@end

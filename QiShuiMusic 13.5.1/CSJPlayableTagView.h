@interface CSJPlayableTagView : UIView
@property (nonatomic) q currentTag;
@property (nonatomic) double length;
- (BOOL)addTag:;
- (id)initWithFrame:;
- (double)length;
- (void)setLength:;
- (long long)currentTag;
- (void)setCurrentTag:;
@end

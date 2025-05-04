@interface AWENearbyC2SectionLayoutConfig : NSObject
@property (nonatomic) q left;
@property (nonatomic) q right;
@property (nonatomic) q horizontalMiddle;
@property (nonatomic) q top;
@property (nonatomic) q bottom;
@property (nonatomic) q verticalMiddle;
- (long long)verticalMiddle;
- (long long)horizontalMiddle;
- (void)setHorizontalMiddle:;
- (void)setVerticalMiddle:;
- (long long)top;
- (void)setBottom:;
- (long long)right;
- (void)setTop:;
- (long long)left;
- (long long)bottom;
- (void)setLeft:;
- (void)setRight:;
@end

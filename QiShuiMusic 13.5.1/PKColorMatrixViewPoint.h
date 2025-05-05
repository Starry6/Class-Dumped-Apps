@interface PKColorMatrixViewPoint : NSObject
@property (nonatomic) q row;
@property (nonatomic) q col;
- (long long)row;
- (id)initWithRow:col:;
- (long long)col;
+ (id)pointWithRow:col:;
@end

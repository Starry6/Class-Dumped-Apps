@interface AWEFeedRelatedItemCellLabelRange : NSObject
@property (nonatomic) q left;
@property (nonatomic) q right;
@property (nonatomic) q originalRight;
@property (nonatomic) BOOL isSpecialAtType;
- (long long)originalRight;
- (void)setOriginalRight:;
- (BOOL)isSpecialAtType;
- (void)setIsSpecialAtType:;
- (id)init;
- (id)initWithLeft:right:;
- (long long)right;
- (long long)left;
- (void)setLeft:;
- (void)setRight:;
@end

@interface BDAPreloadAdItem : NSObject
@property (nonatomic) Q itemNum;
@property (nonatomic) Q itemSize;
@property (nonatomic) BOOL isClicked;
- (unsigned long long)itemNum;
- (BOOL)isClicked;
- (void)setIsClicked:;
- (void)setItemNum:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)itemSize;
- (void)setItemSize:;
@end

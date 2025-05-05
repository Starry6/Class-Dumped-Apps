@interface IESECTabKitTabAnchorModel : NSObject
@property (nonatomic) Q bottomIdx;
@property (nonatomic) Q topIdx;
@property (nonatomic) BOOL animated;
- (unsigned long long)bottomIdx;
- (void)setBottomIdx:;
- (void)setTopIdx:;
- (unsigned long long)topIdx;
- (void)setAnimated:;
- (BOOL)animated;
+ (id)anchorModelWithBottomIdx:topIdx:animated:;
@end

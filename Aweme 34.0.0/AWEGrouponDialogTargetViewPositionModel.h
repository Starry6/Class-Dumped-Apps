@interface AWEGrouponDialogTargetViewPositionModel : NSObject
@property (nonatomic) double topMargin;
@property (nonatomic) double leftMargin;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double feedScrollMargin;
@property (nonatomic) BOOL isFeedScrolling;
@property (nonatomic) BOOL isEntranceCovered;
- (void)setIsFeedScrolling:;
- (void)setIsEntranceCovered:;
- (void)setFeedScrollMargin:;
- (double)feedScrollMargin;
- (BOOL)isFeedScrolling;
- (BOOL)isEntranceCovered;
- (double)leftMargin;
- (void)setHeight:;
- (void)setWidth:;
- (void)setLeftMargin:;
- (double)width;
- (double)height;
- (double)topMargin;
- (void)setTopMargin:;
@end

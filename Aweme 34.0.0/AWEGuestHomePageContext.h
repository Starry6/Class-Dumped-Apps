@interface AWEGuestHomePageContext : AWEPageContext
@property (nonatomic) double containerStickOffsetY;
@property (nonatomic) {CGPoint=dd} containerContentOffset;
@property (nonatomic) double containerHeaderSectionHeight;
- (id)containerContentOffset;
- (double)containerStickOffsetY;
- (double)containerHeaderSectionHeight;
@end

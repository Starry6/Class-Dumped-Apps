@interface IESECLiveAnchorAirViewConfig : NSObject
@property (nonatomic) double topSpace;
@property (nonatomic) double arrowSpace;
@property (nonatomic) double textMargin;
@property (nonatomic) double cornerRadius;
@property (nonatomic) {CGSize=dd} arrowSize;
- (id)arrowSize;
- (double)arrowSpace;
- (void)setArrowSize:;
- (void)setArrowSpace:;
- (void)setTextMargin:;
- (void)setTopSpace:;
- (double)textMargin;
- (double)topSpace;
- (id)init;
- (void)setCornerRadius:;
- (double)cornerRadius;
@end

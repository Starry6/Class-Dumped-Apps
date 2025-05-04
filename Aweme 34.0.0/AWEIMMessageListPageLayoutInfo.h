@interface AWEIMMessageListPageLayoutInfo : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} inputFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} listVCFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} tableFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} topBannerFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bottomBannerFrame;
- (id)listVCFrame;
- (id)tableFrame;
- (void)setListVCFrame:;
- (void)setTableFrame:;
- (void)setTopBannerFrame:;
- (void)setBottomBannerFrame:;
- (id)topBannerFrame;
- (id)bottomBannerFrame;
- (id)description;
- (BOOL)isEqual:;
- (id)inputFrame;
- (void)setInputFrame:;
@end

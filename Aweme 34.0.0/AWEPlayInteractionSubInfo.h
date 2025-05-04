@interface AWEPlayInteractionSubInfo : NSObject
@property (nonatomic) NSString className;
@property (nonatomic) NSString identifier;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} viewFrame;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} realFrame;
- (id)viewFrame;
- (void)setViewFrame:;
- (id)realFrame;
- (void)setRealFrame:;
- (BOOL)isShowing;
- (void)setIdentifier:;
- (id)className;
- (id)identifier;
- (void)setClassName:;
- (void).cxx_destruct;
- (void)setIsShowing:;
@end

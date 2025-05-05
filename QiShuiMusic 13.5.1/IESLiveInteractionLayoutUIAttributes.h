@interface IESLiveInteractionLayoutUIAttributes : NSObject
@property (nonatomic) <IESLiveInteractionLayoutCanvas> canvas;
@property (nonatomic) NSArray separators;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} publicScreenPlaceholderRect;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} containerRect;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} anchorFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} anchorContainerFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} playerFrame;
- (void)setAnchorFrame:;
- (void)setPublicScreenPlaceholderRect:;
- (void)setPlayerFrame:;
- (id)anchorContainerFrame;
- (id)anchorFrame;
- (id)containerRect;
- (id)playerFrame;
- (id)publicScreenPlaceholderRect;
- (void)setAnchorContainerFrame:;
- (void)setContainerRect:;
- (id)canvas;
- (void).cxx_destruct;
- (id)separators;
- (void)setSeparators:;
@end

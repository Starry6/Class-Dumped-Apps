@interface AWEUserLoginPayContext : NSObject
@property (nonatomic) BOOL isUserLoginPayConfig;
@property (nonatomic) BOOL isMaskTransparent;
@property (nonatomic) BOOL isMaskClickDontClose;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} restrictedArea;
@property (nonatomic) BOOL isHalfScreenShadow;
@property (nonatomic) @? maskUserInteractionBlock;
@property (nonatomic) @? contentViewHeightBlock;
- (BOOL)isUserLoginPayConfig;
- (BOOL)isMaskClickDontClose;
- (void)setIsMaskClickDontClose:;
- (BOOL)isMaskTransparent;
- (void)setIsMaskTransparent:;
- (id)restrictedArea;
- (void)setRestrictedArea:;
- (BOOL)isHalfScreenShadow;
- (void)setIsHalfScreenShadow:;
- (id)maskUserInteractionBlock;
- (void)setMaskUserInteractionBlock:;
- (id)contentViewHeightBlock;
- (void)setContentViewHeightBlock:;
- (void)setIsUserLoginPayConfig:;
- (void).cxx_destruct;
@end

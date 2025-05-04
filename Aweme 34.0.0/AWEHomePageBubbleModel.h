@interface AWEHomePageBubbleModel : NSObject
@property (nonatomic) <AWEHomePageBubbleContentConfigProtocol> contentConfig;
@property (nonatomic) double showDuration;
@property (nonatomic) BOOL needCover;
@property (nonatomic) BOOL clickAble;
@property (nonatomic) NSString scene;
@property (nonatomic) NSString componentID;
- (double)showDuration;
- (void)setShowDuration:;
- (void)setContentConfig:;
- (BOOL)needCover;
- (void)setNeedCover:;
- (BOOL)clickAble;
- (void)setClickAble:;
- (void)setScene:;
- (id)init;
- (id)scene;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)contentConfig;
- (void)setComponentID:;
- (id)componentID;
@end

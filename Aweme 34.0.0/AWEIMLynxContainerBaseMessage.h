@interface AWEIMLynxContainerBaseMessage : AWEIMMessage
@property (nonatomic) BOOL ignoreLynxSizeCallBack;
@property (nonatomic) double lynxContainerHeight;
@property (nonatomic) BOOL hasLynxCallBackHeight;
@property (nonatomic) NSString pushDetail;
- (id)pushDetail;
- (id)initWithContentDict:;
- (void)setLynxContainerHeight:;
- (double)lynxContainerHeight;
- (void)setPushDetail:;
- (BOOL)ignoreLynxSizeCallBack;
- (void)setIgnoreLynxSizeCallBack:;
- (void)setHasLynxCallBackHeight:;
- (BOOL)hasLynxCallBackHeight;
- (void).cxx_destruct;
@end

@interface AWEExpInteractiveAngleService : HTSService
@property (nonatomic) NSMutableDictionary configDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUpInteractiveAngleConfig;
- (BOOL)enableExitGestureAdjustWithReferString:;
- (void)setBusinessConfig:;
- (BOOL)shouldExitWithReferString:panGesture:;
- (id)init;
- (id)configDict;
- (void)setConfigDict:;
- (void).cxx_destruct;
@end

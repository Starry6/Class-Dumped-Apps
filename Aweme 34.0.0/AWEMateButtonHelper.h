@interface AWEMateButtonHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)precheckAddMate:followStatus:;
+ (void)configureProfileRelationView:context:;
+ (BOOL)p_splitMateAndFollow;
+ (id)p_autoSize:;
+ (id)p_profileMateState:context:;
+ (id)p_transitionToMate:context:;
+ (id)p_profileAddMateState:context:;
+ (id)p_profileApproveMateState:context:;
+ (id)p_profileHiddenState:context:;
+ (id)p_transitionToAddMate:context:;
+ (id)p_transitionToApproveMate:context:;
+ (id)p_transitionToHidden:context:;
+ (BOOL)p_enableMateAppliedState;
+ (id)p_profileAppliedMateState:context:;
+ (id)p_transitionToAppliedMate:context:;
+ (void)p_trackEvent:toStatus:context:;
+ (id)p_sheetContextFromContext:;
+ (BOOL)canAddMateFloat:enterFrom:;
+ (BOOL)p_canProfileShowAddMate:context:;
+ (BOOL)p_canProfileShowAppliedMate:context:;
@end

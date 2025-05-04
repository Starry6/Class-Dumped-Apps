@interface AWEIMGroupChatRouter : NSObject
+ (void)__log:;
+ (id)__continueHandleGroupPanelTransition:;
+ (id)__getPanelTypeWithQueryDict:;
+ (id)__panelTypeFormatStringWithType:;
+ (void)__setupBizDataInQueryDictionary:withPanelType:;
+ (long long)__panelEnumTypeWithFormatString:;
+ (id)__findTargetGroupPromiseWithConfig:queryDict:;
+ (id)__hasFamilyContact;
+ (id)__hasFetchedChatListDeferPromise;
+ (id)__bizDataKeyWithPanelType:;
+ (id)__bizDataMappers;
+ (void)handleGroupPanelRouterCenterTransition:;
+ (void)handleGroupPanelTransition:;
+ (void)transferToTargetViewControllerWithContext:completion:;
@end

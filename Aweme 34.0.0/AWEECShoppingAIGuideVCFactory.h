@interface AWEECShoppingAIGuideVCFactory : NSObject
- (id)createAIVCPageWithParams:originalSchemaParams:;
- (BOOL)isOpenMixModeWithParams:;
- (id)subAgentVCParams:;
@end

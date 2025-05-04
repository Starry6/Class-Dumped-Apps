@interface AWEIMMessageListContinuousFoldRuleHelper : NSObject
@property (nonatomic) NSDictionary ruleMap;
- (id)ruleMap;
- (void)setRuleMap:;
- (id)p_attributedTextWithGroup:conversation:hasBg:msgFillType:maxUserCount:foldAction:;
- (id)p_msgsAttributedTextWithGroup:conversation:hasBg:msgFillType:foldAction:;
- (void)p_addTapActionRange:hasBg:tapAction:foldAction:attributedText:;
- (id)p_userModels:;
- (id)p_senderModels:;
- (id)nickName:conversationID:;
- (void)p_addTapActionForModel:hasBg:conversation:attributedText:;
- (id)sizeForAttr:;
- (long long)foldableLimit:;
- (BOOL)defaultFoldValue:;
- (id)foldIDForMsg:;
- (id)attributedTextWithGroup:conversation:hasBg:foldAction:;
- (void).cxx_destruct;
- (id)initWithRules:;
+ (BOOL)enableFold;
+ (id)rulesForCon:;
@end

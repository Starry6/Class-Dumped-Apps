@interface AWEECOMIMMsgReferenceUtil : NSObject
+ (void)storeReferenceTCCconfigWithPigeonBizType:;
+ (id)generateMsgReferenceModelWithBizConversationID:;
+ (id)generateLastStoreKeyWithPigeonBizType:;
+ (BOOL)enableReferenceWithPigeonBizType:;
+ (void)clearReferenceWithBizConversationID:;
+ (id)generateReferenceInfoWithReferenceModel:;
+ (void)storeReferenceWithMsgModel:bizConversationID:;
+ (id)generateReferenceKeyWithBizConversationID:;
+ (id)generateReferenceModelWithReferenceInfo:isShark:;
+ (id)generateCurrentStoreKeyWithPigeonBizType:;
+ (BOOL)hasReferenceInfoWithBizConversationID:pigeonBizType:;
@end

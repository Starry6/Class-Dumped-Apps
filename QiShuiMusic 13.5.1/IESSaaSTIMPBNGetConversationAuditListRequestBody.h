@interface IESSaaSTIMPBNGetConversationAuditListRequestBody : GPBMessage
@property (nonatomic) q cursor;
@property (nonatomic) BOOL hasCursor;
@property (nonatomic) NSInteger limit;
@property (nonatomic) BOOL hasLimit;
@property (nonatomic) q convShortId;
@property (nonatomic) BOOL hasConvShortId;
+ (id)descriptor;
@end

@interface AWEIMReadReceiptIdentifier : NSObject
@property (nonatomic) NSString conversationID;
@property (nonatomic) NSString messageID;
- (id)initWithConvID:msgID:;
- (id)messageID;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)conversationID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)identifierWithConvID:msgID:;
@end

@interface AWEIMConversationInfoModel : NSObject
@property (nonatomic) NSString convId;
@property (nonatomic) NSString convName;
@property (nonatomic) BOOL isNewCreatedConversation;
@property (nonatomic) NSNumber groupCreateType;
- (id)groupCreateType;
- (void)setGroupCreateType:;
- (id)convName;
- (id)convId;
- (id)initWithConvId:convName:groupCreateType:;
- (BOOL)isNewCreatedConversation;
- (void)setIsNewCreatedConversation:;
- (void)setConvName:;
- (void).cxx_destruct;
@end

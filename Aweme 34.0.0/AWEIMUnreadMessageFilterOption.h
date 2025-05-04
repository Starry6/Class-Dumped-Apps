@interface AWEIMUnreadMessageFilterOption : NSObject
@property (nonatomic) q filterOptionType;
@property (nonatomic) NSString filterOptionValue;
@property (nonatomic) NSString customConversationId;
@property (nonatomic) BOOL shouldAlwaysQuery;
@property (nonatomic) NSString chatSessionId;
- (long long)filterOptionType;
- (void)setFilterOptionType:;
- (void)setFilterOptionValue:;
- (id)filterOptionValue;
- (void)setCustomConversationId:;
- (void)setShouldAlwaysQuery:;
- (id)customConversationId;
- (BOOL)shouldAlwaysQuery;
- (id)chatSessionId;
- (void)setChatSessionId:;
- (unsigned long long)hash;
- (BOOL)hasValue;
- (id)identifier;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end

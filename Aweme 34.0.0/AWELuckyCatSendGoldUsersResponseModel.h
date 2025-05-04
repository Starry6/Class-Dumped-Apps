@interface AWELuckyCatSendGoldUsersResponseModel : AWELiteBaseApiModel
@property (nonatomic) BOOL hasNext;
@property (nonatomic) NSString cursor;
@property (nonatomic) NSArray friendList;
@property (nonatomic) Q repayType;
@property (nonatomic) Q messageStyle;
- (void)setHasNext:;
- (id)friendList;
- (void)setFriendList:;
- (unsigned long long)repayType;
- (void)setRepayType:;
- (id)cursor;
- (void)setCursor:;
- (void).cxx_destruct;
- (BOOL)hasNext;
- (unsigned long long)messageStyle;
- (void)setMessageStyle:;
+ (id)friendListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

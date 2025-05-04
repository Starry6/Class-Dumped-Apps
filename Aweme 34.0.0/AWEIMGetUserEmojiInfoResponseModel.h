@interface AWEIMGetUserEmojiInfoResponseModel : NSObject
@property (nonatomic) NSString targetAuthorID;
@property (nonatomic) BOOL isMember;
@property (nonatomic) BOOL isAddToEmojiStore;
@property (nonatomic) NSString targetEmojiID;
@property (nonatomic) NSDictionary targetEmoji;
@property (nonatomic) BOOL isAnyMember;
@property (nonatomic) NSString targetEmojiType;
- (void)setIsMember:;
- (BOOL)isMember;
- (id)targetAuthorID;
- (void)setTargetAuthorID:;
- (BOOL)isAddToEmojiStore;
- (void)setIsAddToEmojiStore:;
- (id)targetEmojiID;
- (void)setTargetEmojiID:;
- (id)targetEmoji;
- (void)setTargetEmoji:;
- (BOOL)isAnyMember;
- (void)setIsAnyMember:;
- (id)targetEmojiType;
- (void)setTargetEmojiType:;
- (void).cxx_destruct;
@end

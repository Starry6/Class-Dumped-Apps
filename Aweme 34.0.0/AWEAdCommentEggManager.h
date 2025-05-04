@interface AWEAdCommentEggManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)generateRandomHint:;
+ (id)adCommentEggPlaceholder:;
+ (long long)isRegexMatched:commentStr:;
@end

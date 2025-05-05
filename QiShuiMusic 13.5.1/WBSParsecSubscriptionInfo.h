@interface WBSParsecSubscriptionInfo : NSObject
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSString type;
@property (nonatomic) BOOL expired;
- (id)_initWithDictionary:;
- (BOOL)isExpired;
- (id)initWithString:;
- (id)expirationDate;
- (id)type;
- (void).cxx_destruct;
@end

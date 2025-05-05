@interface SGMailIntelligenceStringHasher : NSObject
@property (nonatomic) NSData rotatingSalt;
- (id)init;
- (id)initWithSaltValue:;
- (void)setRotatingSalt:;
- (long long)hashedUserId;
- (long long)unrotatedHashedString:withHashSize:;
- (void).cxx_destruct;
- (id)unrotatedHashedStrings:withHashSize:;
- (long long)hashedString:;
- (id)rotatingSalt;
- (long long)truncatedSHA256:;
+ (id)rotatingSaltForDate:;
+ (long long)truncatedSHA256:salts:;
+ (long long)hashedString:salts:;
@end

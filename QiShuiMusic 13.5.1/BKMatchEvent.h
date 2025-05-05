@interface BKMatchEvent : NSObject
@property (nonatomic) BOOL result;
@property (nonatomic) Q timeStamp;
@property (nonatomic) BKIdentity matchedIdentity;
- (BOOL)result;
- (void).cxx_destruct;
- (unsigned long long)timeStamp;
- (void)setResult:;
- (void)setTimeStamp:;
- (id)matchedIdentity;
- (void)setMatchedIdentity:;
+ (id)matchEventWithDictionary:device:error:;
@end

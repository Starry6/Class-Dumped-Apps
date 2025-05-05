@interface ASDClipRestrictionsTask : NSObject
@property (nonatomic) BOOL hasErrorStatus;
@property (nonatomic) q responseCode;
- (id)initWithDictionary:;
- (long long)responseCode;
- (void).cxx_destruct;
- (BOOL)hasErrorStatus;
- (BOOL)hasResponseFlag:;
- (id)initWithDictionary:verificationDate:;
- (id)initWithClipRequest:;
- (id)initWithClipRequest:verificationDate:;
@end

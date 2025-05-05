@interface SFTokenBucketWithDups : NSObject
- (id)init;
- (id)initWithBucket:dupHistoryLength:;
- (void)dealloc;
- (BOOL)acquireTokenForIdentifier:;
- (void).cxx_destruct;
@end

@interface BMStoreValidator : NSObject
- (id)init;
- (id)initWithIdentifier:storeConfig:;
- (void).cxx_destruct;
- (int)isChronologicallyValidFromTimestamp:;
- (int)isChronologicallyValidFromBookmark:shouldContinue:;
- (int)isChronologicallyValidFromTimestamp:shouldContinue:;
- (int)isChronologicallyValidWithPublisher:shouldContinue:;
+ (id)new;
@end

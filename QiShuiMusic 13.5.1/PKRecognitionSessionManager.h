@interface PKRecognitionSessionManager : NSObject
@property (nonatomic) q state;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)textInputDidChange:;
- (id)init;
- (void)dealloc;
- (id)listeners;
- (void)setState:;
- (long long)state;
- (void).cxx_destruct;
- (void)dataDetectorQuery:foundItems:;
- (void)hashtagQuery:foundItems:;
- (void)mentionQuery:foundItems:;
- (id)strokeProviderSnapshot;
- (void)recognitionSessionDidUpdateRecognitionResult:;
+ (id)enabledLocales;
@end

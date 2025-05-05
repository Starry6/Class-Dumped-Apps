@interface VCMediaControlInfoGenerator : NSObject
@property (nonatomic) I type;
@property (nonatomic) C version;
@property (nonatomic) C fecFeedbackVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (unsigned char)version;
- (unsigned int)type;
- (void)disposeControlInfo:;
- (id)initWithType:version:;
- (int)registerFillBlobCallback:processBlobCallback:context:;
- (int)deregisterCallbacksWithContext:;
- (void)passMediaControlInfo:isFillBlobCallback:;
- (id)newMediaControlInfo;
- (id)newMediaControlInfoWithBuffer:length:optionalControlInfo:;
- (int)addMediaControlInfoOption:;
- (unsigned long long)feedbackSize;
- (id)newControlInfoFromPool;
- (id)newControlInfo;
- (id)newControlInfoWithBuffer:length:optionalControlInfo:;
- (unsigned char)fecFeedbackVersion;
- (void)setFecFeedbackVersion:;
@end

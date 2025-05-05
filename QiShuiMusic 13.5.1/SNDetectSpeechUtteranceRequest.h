@interface SNDetectSpeechUtteranceRequest : NSObject
@property (nonatomic) double decisionDelay;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithRequestType:;
- (double)decisionDelay;
- (id)createAnalyzerWithError:;
+ (BOOL)supportsSecureCoding;
@end

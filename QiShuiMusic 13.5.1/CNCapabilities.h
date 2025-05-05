@interface CNCapabilities : NSObject
@property (nonatomic) BOOL areTelephonyCallsSupported;
@property (nonatomic) BOOL isiMessageSupported;
@property (nonatomic) BOOL isFaceTimeVideoSupported;
@property (nonatomic) BOOL isFaceTimeAudioSupported;
@property (nonatomic) BOOL isPaySupported;
@property (nonatomic) BOOL isExpanseSupported;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)areTelephonyCallsSupported;
- (BOOL)isiMessageSupported;
- (BOOL)isFaceTimeVideoSupported;
- (BOOL)isFaceTimeAudioSupported;
- (BOOL)isPaySupported;
- (BOOL)isExpanseSupported;
+ (BOOL)shouldUseLegacyMessages;
@end

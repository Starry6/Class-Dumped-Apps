@interface WK_RTCWrappedNativeVideoDecoder : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCallback:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (long long)startDecodeWithNumberOfCores:;
- (long long)releaseDecoder;
- (long long)decode:missingFrames:codecSpecificInfo:renderTimeMs:;
- (id)implementationName;
- (id)initWithNativeDecoder:;
- (id)releaseWrappedDecoder;
@end

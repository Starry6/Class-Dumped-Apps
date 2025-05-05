@interface HTSLiveGameIntroduceShowMessage : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) NSInteger msgType;
@property (nonatomic) HTSLiveIntroduceDispatchStrategy dispatchStrategy;
@property (nonatomic) BOOL hasDispatchStrategy;
@property (nonatomic) NSString updatedData;
@property (nonatomic) q introduceType;
@property (nonatomic) HTSLiveAtmosphereContent atmosphereContent;
@property (nonatomic) BOOL hasAtmosphereContent;
+ (id)descriptor;
@end

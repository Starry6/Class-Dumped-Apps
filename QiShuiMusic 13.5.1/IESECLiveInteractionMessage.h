@interface IESECLiveInteractionMessage : GPBMessage
@property (nonatomic) NSInteger msgType;
@property (nonatomic) IESECBarrageBuyInfo barrageBuyInfo;
@property (nonatomic) BOOL hasBarrageBuyInfo;
@property (nonatomic) IESECInteractionData interactionData;
@property (nonatomic) BOOL hasInteractionData;
+ (id)descriptor;
@end

@interface MPRemoteCommandStatus : NSObject
@property (nonatomic) MRSendCommandResultStatus mediaRemoteType;
@property (nonatomic) q statusCode;
@property (nonatomic) q type;
@property (nonatomic) MPRemoteCommandHandlerDialog dialog;
@property (nonatomic) NSError error;
@property (nonatomic) NSData customData;
@property (nonatomic) NSString customDataType;
- (long long)statusCode;
- (id)error;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)dialog;
- (id)customData;
- (id)customDataType;
- (id)initWithMediaRemoteType:;
- (id)mediaRemoteType;
- (id)analyticSignature;
+ (id)successStatus;
+ (id)statusWithCode:;
+ (id)statusWithCode:error:;
+ (id)statusWithCode:dialog:;
+ (id)statusWithCode:customData:type:;
+ (void)cacheStatus:forCommandID:;
+ (id)fetchStatusForCommandID:;
@end

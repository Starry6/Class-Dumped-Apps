@interface IESECLiveIMConfig : NSObject
@property (nonatomic) NSString bizIdentity;
@property (nonatomic) NSString roomIdentity;
@property (nonatomic) NSString roomID;
@property (nonatomic) BOOL isValid;
- (void)setBizIdentity:;
- (id)bizIdentity;
- (id)roomIdentity;
- (void)setRoomIdentity:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)roomID;
- (void)setRoomID:;
+ (id)defaultAudienceConfigWithRoomID:;
@end

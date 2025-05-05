@interface IESLiveIMRoomConfig : NSObject
@property (nonatomic) q bizUniqueToken;
@property (nonatomic) NSString bizIdentity;
@property (nonatomic) NSString roomIdentity;
@property (nonatomic) NSString roomID;
@property (nonatomic) NSDictionary customParams;
- (void)setBizIdentity:;
- (id)bizIdentity;
- (long long)bizUniqueToken;
- (id)customParams;
- (id)roomIdentity;
- (void)setBizUniqueToken:;
- (void)setCustomParams:;
- (void)setRoomIdentity:;
- (void).cxx_destruct;
- (id)roomID;
- (void)setRoomID:;
@end

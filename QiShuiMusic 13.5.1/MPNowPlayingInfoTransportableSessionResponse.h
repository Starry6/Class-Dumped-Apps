@interface MPNowPlayingInfoTransportableSessionResponse : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString sessionType;
@property (nonatomic) NSData data;
- (id)sessionType;
- (id)data;
- (id)identifier;
- (void).cxx_destruct;
- (id)_init;
+ (id)responseWithIdentifier:sessionType:data:;
@end

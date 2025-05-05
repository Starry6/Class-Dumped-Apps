@interface BDUGPushSwitchStatus : NSObject
@property (nonatomic) NSString switchName;
@property (nonatomic) q isClosed;
@property (nonatomic) NSDictionary extra;
- (void)mapFromJSON:;
- (void)setExtra:;
- (void)setSwitchName:;
- (id)switchName;
- (id)extra;
- (long long)isClosed;
- (id)initWithJSON:;
- (void).cxx_destruct;
- (void)setIsClosed:;
@end

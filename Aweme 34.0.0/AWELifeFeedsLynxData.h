@interface AWELifeFeedsLynxData : NSObject
@property (nonatomic) NSString scene;
@property (nonatomic) NSString sessionId;
@property (nonatomic) NSArray queryItems;
@property (nonatomic) NSDictionary trackParams;
- (id)trackParams;
- (void)setTrackParams:;
- (void)setScene:;
- (void)setSessionId:;
- (id)sessionId;
- (id)scene;
- (void)setQueryItems:;
- (id)queryItems;
- (void).cxx_destruct;
@end

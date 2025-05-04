@interface AWEXBridgeOpenService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)scanCodeWithParamModel:completionHandler:;
- (void)updateGeckoWithParamModel:completionHandler:;
- (void)getGeckoInfoWithParamModel:completionHandler:;
- (BOOL)downloadWithAccessKey:channel:;
@end

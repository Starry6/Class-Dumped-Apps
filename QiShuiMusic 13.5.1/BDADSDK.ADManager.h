@interface BDADSDK.ADManager : NSObject
- (BOOL)trackAdEvent:tag:extra:adExtra:;
- (BOOL)monitor:value:category:extra:;
- (id)requestForBinaryFrom:params:method:needCommonParams:headerField:priority:requestSerializer:responseSerializer:completion:;
- (id)requestForJsonFrom:params:method:needCommonParams:headerField:priority:requestSerializer:responseSerializer:completion:;
- (BOOL)trackEvent:extra:;
- (BOOL)trackLog:tag:level:;
- (BOOL)trackURLs:trackLabel:cid:extraData:logExtra:;
- (id)init;
- (void).cxx_destruct;
+ (id)shared;
@end

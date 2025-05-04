@interface AWEEffectPlatformRequestManager : NSObject
@property (nonatomic) q requestOptimizeAbKey;
@property (nonatomic) double requestTimeout;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)downloadFileWithURLString:downloadPath:downloadProgress:completion:;
- (void)requestWithURLString:parameters:headerFields:httpMethod:completion:;
@end

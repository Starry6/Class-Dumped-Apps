@interface BDImageAuthorizationManagerConfig : NSObject
@property (nonatomic) BDWebImageStartUpConfig startUpConfig;
@property (nonatomic) BDWebImageAuthorizationControl authorizationControl;
@property (nonatomic) NSArray addedComponents;
@property (nonatomic) NSArray addedFeatures;
@property (nonatomic) NSDictionary verifyErr;
@property (nonatomic) NSString authorizationConfigDescription;
- (id)addedComponents;
- (id)addedFeatures;
- (id)authorizationConfigDescription;
- (id)authorizationControl;
- (BOOL)isSupportHeifDecoding;
- (BOOL)isSupportHeifEncoding;
- (void)setAddedComponents:;
- (void)setAddedFeatures:;
- (void)setAuthorizationControl:;
- (void)setStartUpConfig:;
- (void)setVerifyErr:;
- (id)startUpConfig;
- (void)startUpWithConfig:;
- (id)verifyErr;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end

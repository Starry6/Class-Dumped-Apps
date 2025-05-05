@interface APDIDDelegateDef : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getAppName;
- (id)getAppVersion;
- (id)getSimpleDeviceInfo;
- (id)getSysInfoByName:;
- (id)getTokenResult;
- (id)getTokenResultFromCache;
- (id)verifyStringNotNil:;
- (id)getOSVersion;
@end

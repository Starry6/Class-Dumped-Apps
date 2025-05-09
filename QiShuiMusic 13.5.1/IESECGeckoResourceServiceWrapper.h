@interface IESECGeckoResourceServiceWrapper : NSObject
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSString resourceVersion;
@property (nonatomic) NSDictionary resourceChannels;
@property (nonatomic) NSString gurdCDNPath;
@property (nonatomic) BOOL enableMultiThreadOpt;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getDataWithName:resourceStatus:;
- (void)setGurdCDNPath:;
- (void)addGeckoCustomParams;
- (void)asyncGetDataWithName:completion:resourceStatus:;
- (void)asyncGetFilePathWithName:completion:resourceStatus:;
- (void)asyncGetImageWithName:completion:resourceStatus:;
- (BOOL)enableMultiThreadOpt;
- (void)enableMultiThreadOpt:;
- (void)fetchIESECResourceIfNeeded;
- (id)getFilePathWithName:resourceStatus:;
- (id)getImageWithName:resourceStatus:;
- (id)gurdCDNPath;
- (void)registerGeckoAccessKey;
- (id)resourceChannels;
- (void)setEnableMultiThreadOpt:;
- (void)setResourceChannels:;
- (void)setupDefaultPrefixToAk;
- (id)resourceVersion;
- (void).cxx_destruct;
- (id)accessKey;
- (void)setAccessKey:;
- (void)setResourceVersion:;
+ (void)fetchAnnieEcomResource:;
+ (void)fetchAnnieEcomResourceOnLanuch;
+ (id)invocationWithClass:forSelector:;
+ (id)sharedInstance;
@end

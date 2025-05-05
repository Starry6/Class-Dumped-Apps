@interface IESLatchAttachModule : NSObject
@property (nonatomic) NSString latchID;
@property (nonatomic) NSString business;
@property (nonatomic) NSString url;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)latchID;
- (void)checkPrefetchTemplateVersion:;
- (id)getSDKVersion;
- (id)initWithParam:;
- (void)latchAttachComponent:;
- (void)latchAttachComponentV2:completion:;
- (void)setLatchID:;
- (id)url;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)business;
- (void)setBusiness:;
+ (id)methodLookup;
+ (id)name;
@end

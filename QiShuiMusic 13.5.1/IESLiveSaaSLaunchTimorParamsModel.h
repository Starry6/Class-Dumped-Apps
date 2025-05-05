@interface IESLiveSaaSLaunchTimorParamsModel : NSObject
@property (nonatomic) NSString appID;
@property (nonatomic) NSString launchFrom;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString enterFromMerge;
@property (nonatomic) NSString actionType;
@property (nonatomic) NSString clickSource;
@property (nonatomic) NSDictionary externalParams;
- (void)setClickSource:;
- (void)setEnterMethod:;
- (id)clickSource;
- (id)enterFromMerge;
- (id)enterMethod;
- (id)externalParams;
- (id)launchFrom;
- (void)setEnterFromMerge:;
- (void)setExternalParams:;
- (void)setIsAnchor:;
- (void)setLaunchFrom:;
- (id)actionType;
- (void)setActionType:;
- (BOOL)isAnchor;
- (void)setAppID:;
- (id)appID;
- (void).cxx_destruct;
@end

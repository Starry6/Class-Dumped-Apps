@interface AWEOpenPlatformLynxAuthInfo : NSObject
@property (nonatomic) AWEOpenPlatformAuthEntranceModel entranceModel;
@property (nonatomic) @? completionBlock;
@property (nonatomic) NSDictionary originParams;
@property (nonatomic) @? failCompletionBlock;
- (id)entranceModel;
- (void)setEntranceModel:;
- (id)originParams;
- (void)setOriginParams:;
- (void)setFailCompletionBlock:;
- (id)failCompletionBlock;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void).cxx_destruct;
@end

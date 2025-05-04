@interface AWEUGFCollectFollowBaseTask : NSObject
@property (nonatomic) AFDCampaignTaskContext context;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) NSNumber successBizCode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:;
- (void)finishWithParams:completion:;
- (void)finishWithParams:openSchema:completion:;
- (id)successBizCode;
- (void)setSuccessBizCode:;
- (void)remove;
- (id)init;
- (id)initWithContext:;
- (void).cxx_destruct;
- (id)context;
+ (id)taskWithContext:;
+ (id)topic;
@end

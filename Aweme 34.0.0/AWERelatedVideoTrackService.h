@interface AWERelatedVideoTrackService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackRelatedLongVideoPayment:response:error:otherParams:;
+ (void)trackRelatedLongVideoPlay:awemeModel:otherParams:;
+ (void)trackRelatedLongVideoPayment:status:params:;
+ (id)errorDescMapWithErrorCode:;
+ (void)trackRelatedLongVideoUnpaidEvent:model:commonParams:introTypeStr:;
+ (void)setModuleStr:;
+ (id)moduleString;
@end

@interface AWEECEntranceInfoServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)composeFactory:;
+ (id)entranceInfoWhiteList;
+ (id)composeEntranceInfo:scene:;
+ (id)composeEntranceInfo:scene:originalDict:;
@end

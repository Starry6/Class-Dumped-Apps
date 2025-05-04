@interface AWEPaidStreamTrackTool : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)commonParamsWithAuthItem:authConfig:extraInfo:;
+ (void)monitorWithEventName:parameters:;
+ (id)stringForPaidScene:;
@end

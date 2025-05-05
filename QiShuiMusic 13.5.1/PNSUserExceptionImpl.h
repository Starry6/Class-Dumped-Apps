@interface PNSUserExceptionImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackUserExceptionWithType:backtracesArray:customParams:filters:callback:;
- (void)trackUserExceptionWithType:title:subTitle:customParams:filters:callback:;
@end

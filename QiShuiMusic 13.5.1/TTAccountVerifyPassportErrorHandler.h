@interface TTAccountVerifyPassportErrorHandler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)addPassportErrorHandler;
+ (BOOL)handlePassportError:request:response:jsonObj:completion:;
+ (id)supportFlows;
@end

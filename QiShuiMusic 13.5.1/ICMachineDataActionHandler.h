@interface ICMachineDataActionHandler : NSObject
- (id)init;
- (void)processAction:data:withRequestContext:version:withCompletionHandler:;
- (void).cxx_destruct;
- (void)processActionFromResponse:withRequestContext:withCompletionHandler:;
+ (id)sharedHandler;
@end

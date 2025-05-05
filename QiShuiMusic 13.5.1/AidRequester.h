@interface AidRequester : NSObject
- (id)postRest:token:utdid:oldAid:;
- (void)postRestAsync:token:utdid:oldAid:aidDelegate:;
- (void)connection:didReceiveData:;
- (void)connection:didFailWithError:;
+ (id)aidFromJson:oldAid:;
+ (BOOL)isContainStr:contain:;
+ (id)postUrl:token:utdid:oldAid:;
@end

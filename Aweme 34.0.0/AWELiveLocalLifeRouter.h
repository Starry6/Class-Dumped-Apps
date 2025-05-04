@interface AWELiveLocalLifeRouter : NSObject
+ (void)trackMemberSchemaReport:location:;
+ (void)trackSchemaReport:originServerUrl:;
+ (BOOL)transferToUrlString:originServerUrl:;
@end

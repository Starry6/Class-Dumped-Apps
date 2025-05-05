@interface CTCarrierSpaceError : NSObject
+ (id)errorForCode:withDescription:;
+ (id)errorForCode:;
+ (id)errorForCode:subdomain:subdomainError:;
@end

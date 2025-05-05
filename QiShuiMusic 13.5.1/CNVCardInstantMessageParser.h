@interface CNVCardInstantMessageParser : NSObject
+ (id)valueWithService:existingHandles:parser:;
+ (id)handleWithUsername:userIdentifier:service:bundleIdentifiers:teamIdentifier:;
+ (id)serviceForString:;
@end

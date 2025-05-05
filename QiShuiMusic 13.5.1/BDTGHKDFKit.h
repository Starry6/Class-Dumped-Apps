@interface BDTGHKDFKit : NSObject
+ (id)deriveKey:info:salt:outputSize:;
+ (id)deriveKey:info:salt:outputSize:offset:;
+ (id)expand:info:outputSize:offset:;
+ (id)extract:salt:;
@end

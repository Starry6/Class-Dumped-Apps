@interface BDHMContainerTraceLog : NSObject
+ (void)detach:webView:;
+ (void)attach:webView:;
+ (void)addContext:containerId:;
+ (void)attach:LynxView:;
+ (void)collectBoolean:field:data:;
+ (void)collectData:uuid:field:;
+ (void)collectInt:field:data:;
+ (void)collectLong:field:data:;
+ (void)collectString:field:data:;
+ (void)deleteData:isForce:;
+ (void)detach:LynxView:;
+ (void)fetchContainerData:block:;
+ (id)generateIDForContainer;
+ (void)invalidateID:andData:;
+ (void)reportContainerError:withID:withError:usedX:;
+ (void)syncCollectionToTraceEvent:timestamp:;
+ (id)viewForContainerID:;
+ (void)clearData;
@end

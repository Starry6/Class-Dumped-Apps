@interface OSALegacyXform : NSObject
- (id)init;
- (void).cxx_destruct;
- (BOOL)prepareTemplate:forLogType:error:;
- (id)formatFrame:withImages:macosStyle:;
- (id)formatCallstacks:withImages:macosStyle:;
- (id)formatImages:macosStyle:;
- (id)formatArm32ThreadState:index:;
- (id)formatArm64ThreadState:index:;
- (id)formatX86ThreadState:index:;
- (id)formatLastException:withImages:;
- (id)formatLastBranchState:index:withImages:;
- (id)_hexDump:offset:indicator:;
- (id)formatInstructionState:index:;
- (id)_getValueForKey:fromBody:orHeader:;
- (BOOL)transformJSON:header:error:streamingBlock:;
- (BOOL)transformLines:withDefinitions:body:header:error:streamingBlock:;
+ (id)rollSchemaForward:;
+ (id)transformURL:options:;
@end
